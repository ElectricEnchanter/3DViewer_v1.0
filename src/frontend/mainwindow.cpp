#include "mainwindow.h"

#include "../parser.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->sliderZoom->setSliderPosition(ui->widget->getZoomSize() * 100);
  ui->spinDotSize->setValue(ui->widget->getDotSize());
  ui->spinLineSize->setValue(ui->widget->getLineSize());
  ui->widget->zoomPointer = ui->sliderZoom;
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_fileDialog_clicked() {
  QString file_name = QFileDialog::getOpenFileName(this, "Open a file", "/");
  QByteArray file_name_buf = file_name.toLocal8Bit();
  char *fileName = file_name_buf.data();

  QFile f(fileName);
  QFileInfo fileInfo(f.fileName());
  QString filename(fileInfo.fileName());

  if (*fileName) {
    ui->fileName->setText(filename);
    ui->filePath->setText(file_name);
    ui->widget->setfilename(file_name);

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
