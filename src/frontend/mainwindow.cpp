#include "mainwindow.h"

#include "../parser.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), gif_timer(new QTimer) {
  ui->setupUi(this);

  settings = new QSettings("3DViewer", "3DViewer Settings", this);
  loadSettings();

  connect(gif_timer, SIGNAL(timeout()), this, SLOT(createGif()));
  connect(ui->saveGIF, &QPushButton::clicked, this,
          &MainWindow::on_saveGIF_clicked);

  ui->sliderZoom->setSliderPosition(ui->widget->getZoomSize() * 100);
  ui->spinDotSize->setValue(ui->widget->getDotSize());
  ui->spinLineSize->setValue(ui->widget->getLineSize());
  ui->widget->zoomPointer = ui->sliderZoom;
}

MainWindow::~MainWindow() {
  saveSettings();
  if (pgif) delete pgif;
  delete gif_timer;
  delete ui;
}

void MainWindow::on_fileDialog_clicked() {
  QString file_name = QFileDialog::getOpenFileName(this, "Open a file", "/");
  QByteArray file_name_buf = file_name.toLocal8Bit();
  char *fileName = file_name_buf.data();

  settings->setValue("fileName", fileName);

  QFile f(fileName);
  QFileInfo fileInfo(f.fileName());
  QString filename(fileInfo.fileName());

  if (*fileName) {
    ui->fileName->setText(filename);
    ui->filePath->setText(file_name);
    ui->widget->setfilename(file_name);

    drow(file_name);
  }
}

void MainWindow::drow(QString file_name) {
  if (ui->widget->getStartFlag() != 0) {
    remove_matrix(&(ui->widget->obj.matrix_3d));
    remove_massive_of_polygons(&(ui->widget->obj.polygons));
  }
  ui->widget->obj.count_of_vertex = 0;
  ui->widget->obj.count_of_facets = 0;

  QByteArray a = file_name.toLocal8Bit();
  char *aa = a.data();
  first_parcer_of_file(aa, &ui->widget->obj);
  ui->countVertex->setText(QString::number(ui->widget->obj.count_of_vertex));
  ui->countFacets->setText(QString::number(ui->widget->obj.count_of_facets));

  create_matrix(ui->widget->obj.count_of_vertex + 1, 3,
                &ui->widget->obj.matrix_3d);
  create_massive_of_polygons(ui->widget->obj.count_of_facets + 1,
                             &ui->widget->obj.polygons);
  second_parcer_of_file(aa, &ui->widget->obj);
  ui->widget->setStartFlag(1);
}

void MainWindow::on_spinMoveX_valueChanged(double arg1) {
  ui->widget->setxMove(arg1);
  ui->widget->update();
}

void MainWindow::on_spinMoveY_valueChanged(double arg1) {
  ui->widget->setyMove(arg1);
  ui->widget->update();
}

void MainWindow::on_spinMoveZ_valueChanged(double arg1) {
  ui->widget->setzMove(arg1);
  ui->widget->update();
}

void MainWindow::on_spinRotX_valueChanged(double arg1) {
  ui->widget->setxRot(arg1);
  ui->widget->update();
}

void MainWindow::on_spinRotY_valueChanged(double arg1) {
  ui->widget->setyRot(arg1);
  ui->widget->update();
}

void MainWindow::on_spinRotZ_valueChanged(double arg1) {
  ui->widget->setzRot(arg1);
  ui->widget->update();
}

void MainWindow::on_bgColor_clicked() {
  float r, g, b, a;
  ui->widget->getBgColor(&r, &g, &b, &a);
  QColor tmp;
  tmp.setRgbF(r, g, b, a);
  QColor color = QColorDialog::getColor(tmp);
  color.getRgbF(&r, &g, &b, &a);
  ui->widget->setBgColor(r, g, b, a);
}

void MainWindow::on_facetColor_clicked() {
  float r, g, b, a;
  ui->widget->getLineColor(&r, &g, &b, &a);
  QColor tmp;
  tmp.setRgbF(r, g, b, a);
  QColor color = QColorDialog::getColor(tmp);
  color.getRgbF(&r, &g, &b, &a);
  ui->widget->setLineColor(r, g, b, a);
}

void MainWindow::on_vertexColor_clicked() {
  float r, g, b, a;
  ui->widget->getPointColor(&r, &g, &b, &a);
  QColor tmp;
  tmp.setRgbF(r, g, b, a);
  QColor color = QColorDialog::getColor(tmp);
  color.getRgbF(&r, &g, &b, &a);
  ui->widget->setPointColor(r, g, b, a);
}

void MainWindow::on_spinDotSize_valueChanged(double arg1) {
  ui->widget->setDotSize(arg1);
  ui->widget->update();
}

void MainWindow::on_sliderZoom_valueChanged(int value) {
  ui->widget->setZoomSize((float)value / 100);
  ui->widget->update();
}

void MainWindow::on_spinLineSize_valueChanged(double arg1) {
  ui->widget->setLineSize(arg1);
  ui->widget->update();
}

void MainWindow::on_boxVertex_currentIndexChanged(int arg1) {
  ui->widget->setBoxVertexInd(arg1);
  ui->widget->update();
}

void MainWindow::on_boxFacets_currentIndexChanged(int arg1) {
  ui->widget->setBoxFacetsInd(arg1);
  ui->widget->update();
}

void MainWindow::on_boxProjection_currentIndexChanged(int arg1) {
  ui->widget->setBoxProjectionInd(arg1);
  ui->widget->update();
}

void MainWindow::on_autorotate_stateChanged(int arg1) {
  ui->widget->setAutorotate(arg1);
  ui->widget->update();
}

void MainWindow::on_saveJPEG_clicked() {
  QImage img = ui->widget->grabFramebuffer();
  QString dirname =
      QFileDialog::getSaveFileName(this, "Выбирите папку", "/", ".jpeg");
  img.save(dirname + ".jpeg", "JPEG");
}

void MainWindow::on_saveBMP_clicked() {
  QImage img = ui->widget->grabFramebuffer();
  QString dirname =
      QFileDialog::getSaveFileName(this, "Выбирите папку", "/", ".bmp");
  img.save(dirname + ".bmp", "BMP");
}

void MainWindow::createGif() {
  if (pgif->frameCount() < 50) {
    QImage frame = ui->widget->grabFramebuffer();
    pgif->addFrame(frame.scaled(640, 480));
    return;
  }
  gif_timer->stop();
  ui->saveGIF->setText("Гифка");
  QString dirname =
      QFileDialog::getSaveFileName(this, "Выбирите папку", "/", ".gif");
  pgif->save(dirname + ".gif");
}

void MainWindow::on_saveGIF_clicked() {
  if (ui->saveGIF->text() == "Гифка") {
    ui->saveGIF->setText("Запись...");
    pgif = new QGifImage;
    pgif->setDefaultDelay(100);
    gif_timer->start(100);
  }
}

void MainWindow::saveSettings() {
  //  settings->setValue("Color Back", ui->widget->getLineColor());
  //  settings->setValue("Color Dot", ui->widget->colorD);
  //  settings->setValue("Color Line", ui->widget->colorL);
  settings->setValue("Type Line", ui->widget->getBoxFacetsInd());
  settings->setValue("Type Point", ui->widget->getBoxVertexInd());
  settings->setValue("Type Projection", ui->widget->getBoxProjectionInd());
  settings->setValue("Dot Size", ui->widget->getDotSize());
  settings->setValue("Line Size", ui->widget->getLineSize());

  settings->setValue("Move X", ui->widget->getxMove());
  settings->setValue("Move Y", ui->widget->getyMove());
  settings->setValue("Move Z", ui->widget->getzMove());
  settings->setValue("Rot X", ui->widget->getxRot());
  settings->setValue("Rot Y", ui->widget->getyRot());
  settings->setValue("Rot Z", ui->widget->getzRot());

  //  settings->setValue("File Name", ui->filePath->text());
  //  settings->setValue("File_Name", file_name);
}

void MainWindow::loadSettings() {
  //  QVariant var = settings->value("Color Back", QColor(Qt::white));
  //  QVariant var1 = settings->value("Color Dot", QColor(Qt::white));
  //  QVariant var2 = settings->value("Color Line", QColor(Qt::white));
  //  ui->widget->colorBack = var.value<QColor>();
  //  ui->widget->colorD = var1.value<QColor>();
  //  ui->widget->colorL = var2.value<QColor>();
  ui->boxFacets->setCurrentIndex(settings->value("Type Line", 0).toInt());
  ui->boxVertex->setCurrentIndex(settings->value("Type Point", 0).toInt());
  ui->boxProjection->setCurrentIndex(
      settings->value("Type Projection", 0).toInt());
  ui->spinDotSize->setValue(settings->value("Dot Size", 0).toFloat());
  ui->spinLineSize->setValue(settings->value("Line Size", 0).toFloat());
  ui->spinMoveX->setValue(settings->value("Move X", 0).toFloat());
  ui->spinMoveY->setValue(settings->value("Move Y", 0).toFloat());
  ui->spinMoveZ->setValue(settings->value("Move Z", 0).toFloat());
  ui->spinRotX->setValue(settings->value("Rot X", 0).toFloat());
  ui->spinRotY->setValue(settings->value("Rot Y", 0).toFloat());
  ui->spinRotZ->setValue(settings->value("Rot Z", 0).toFloat());
  QString daa = (settings->value("fileName", 0).toString());
  QByteArray j = daa.toLocal8Bit();
  char *fName = j.data();
  //  if (ui->pathName->text() == "У самурая нет цели, только путь") {
  //  QFile f(fName);
  //  QFileInfo fileInfo(f.fileName());
  //  QString filename(fileInfo.fileName());
  //  ui->fileName->setText(filename);
  //  ui->filePath->setText(daa);
  //  ui->widget->setfilename(j);
  //  drow(daa);
  //  }
}
