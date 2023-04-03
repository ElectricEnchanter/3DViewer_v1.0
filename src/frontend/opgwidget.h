#ifndef OPGWIDGET_H
#define OPGWIDGET_H

#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
extern "C" {
#include "../parser.h"
}
#include <QColorDialog>
#include <QDir>
#include <QOpenGLWidget>
#include <QSlider>
#include <QTimer>
#include <QtOpenGL>

class OPGWidget : public QOpenGLWidget {
  Q_OBJECT
 public:
  explicit OPGWidget(QWidget *parent = nullptr);
  ~OPGWidget();
  QString getfilename();
  main_struct obj;
  void setfilename(QString a);
  float getZoomSize();
  void setZoomSize(float newSize);
  float getxMove();
  void setxMove(float newX);
  float getyMove();
  void setyMove(float newY);
  float getzMove();
  void setzMove(float newZ);
  float getxRot();
  void setxRot(float newX);
  float getyRot();
  void setyRot(float newY);
  float getzRot();
  void setzRot(float newZ);
  void setDotSize(float newDotZise);
  int getDotSize();
  void setLineSize(float newDotZise);
  int getLineSize();
  void setSliderZoom(int count);
  int getBoxVertexInd();
  void setBoxVertexInd(int newBoxVertexInd);
  int getBoxFacetsInd();
  void setBoxFacetsInd(int newBoxFacetsInd);
  int getBoxProjectionInd();
  void setBoxProjectionInd(int newBoxFacetsInd);
  QSlider *zoomPointer;
  void setPointColor(float r, float g, float b, float a);
  void setLineColor(float r, float g, float b, float a);
  void setBgColor(float r, float g, float b, float a);
  void getPointColor(float *r, float *g, float *b, float *a);
  void getLineColor(float *r, float *g, float *b, float *a);
  void getBgColor(float *r, float *g, float *b, float *a);
  void setStartFlag(int flag);
  int getStartFlag();
  void setAutorotate(int status);
  int getAutorotate();

 private:
  QString file_name = "";
  QTimer tmr;
  QPoint mPos;
  int boxVertexInd = 2, boxFacetsInd = 0, boxProjectionInd = 0;
  float dotSize = 12, lineSize = 8;

  float rBg = 1.1, gBg = 1.0, bBg = 0.7, aBg = 1;
  float rPoints = 0, gPoints = 0, bPoints = 1, aPoints = 1;
  float rLine = 0, gLine = 1, bLine = 0, aLine = 1;
  int autorotate = 0;
  float xRot, yRot, zRot;
  float xMove = 0, yMove = 0, zMove = 0;
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;
  void resizeGL(int w, int h) override;
  void initializeGL() override;
  void paintGL() override;
  void wheelEvent(QWheelEvent *event) override;
  float zoom_size = 0.5;
  int flag_first_start = 0;

 signals:
  void wheelUpSig(int count);
  void wheelDownSig(int count);

 private slots:
  void wheelUp();
  void wheelDown();
};

#endif  // OPGWIDGET_H
