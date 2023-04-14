/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "opgwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    OPGWidget *widget;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_6;
    QComboBox *boxProjection;
    QLabel *label_24;
    QLabel *label_15;
    QLabel *label_21;
    QPushButton *saveJPEG;
    QLabel *label_11;
    QLabel *label_13;
    QPushButton *vertexColor;
    QDoubleSpinBox *spinRotY;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *spinMoveZ;
    QLabel *label_20;
    QSpacerItem *verticalSpacer_2;
    QSlider *sliderZoom;
    QPushButton *bgColor;
    QLabel *label_6;
    QDoubleSpinBox *spinRotX;
    QComboBox *boxFacets;
    QLabel *label_23;
    QComboBox *boxVertex;
    QLabel *label_8;
    QLabel *label_5;
    QDoubleSpinBox *spinDotSize;
    QPushButton *saveBMP;
    QLabel *label_25;
    QDoubleSpinBox *spinRotZ;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_3;
    QCheckBox *autorotate;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QDoubleSpinBox *spinLineSize;
    QLabel *label_19;
    QLabel *label_22;
    QLabel *label;
    QPushButton *facetColor;
    QLabel *label_14;
    QLabel *label_4;
    QPushButton *saveGIF;
    QDoubleSpinBox *spinMoveX;
    QDoubleSpinBox *spinMoveY;
    QToolButton *fileDialog;
    QLabel *fileName;
    QLabel *countVertex;
    QLabel *countFacets;
    QLabel *labelTimer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1399, 769);
        MainWindow->setMinimumSize(QSize(1300, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new OPGWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(600, 600));

        horizontalLayout->addWidget(widget);

        horizontalSpacer = new QSpacerItem(5, 23, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, -1, 0, -1);
        boxProjection = new QComboBox(centralwidget);
        boxProjection->addItem(QString());
        boxProjection->addItem(QString());
        boxProjection->setObjectName(QString::fromUtf8("boxProjection"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(boxProjection->sizePolicy().hasHeightForWidth());
        boxProjection->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("PT Sans")});
        font.setPointSize(14);
        boxProjection->setFont(font);
        boxProjection->setMaxVisibleItems(3);
        boxProjection->setMaxCount(3);

        gridLayout_6->addWidget(boxProjection, 8, 1, 1, 1);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setFont(font);

        gridLayout_6->addWidget(label_24, 6, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_15, 14, 0, 1, 1);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setFont(font);

        gridLayout_6->addWidget(label_21, 6, 0, 1, 1);

        saveJPEG = new QPushButton(centralwidget);
        saveJPEG->setObjectName(QString::fromUtf8("saveJPEG"));

        gridLayout_6->addWidget(saveJPEG, 10, 0, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_11, 9, 0, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout_6->addWidget(label_13, 9, 2, 1, 1);

        vertexColor = new QPushButton(centralwidget);
        vertexColor->setObjectName(QString::fromUtf8("vertexColor"));

        gridLayout_6->addWidget(vertexColor, 6, 1, 1, 1);

        spinRotY = new QDoubleSpinBox(centralwidget);
        spinRotY->setObjectName(QString::fromUtf8("spinRotY"));
        sizePolicy1.setHeightForWidth(spinRotY->sizePolicy().hasHeightForWidth());
        spinRotY->setSizePolicy(sizePolicy1);
        spinRotY->setFont(font);
        spinRotY->setAlignment(Qt::AlignCenter);
        spinRotY->setMinimum(-1000.000000000000000);
        spinRotY->setMaximum(1000.000000000000000);
        spinRotY->setSingleStep(10.000000000000000);

        gridLayout_6->addWidget(spinRotY, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(10, 100, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_6->addItem(verticalSpacer, 0, 1, 1, 1);

        spinMoveZ = new QDoubleSpinBox(centralwidget);
        spinMoveZ->setObjectName(QString::fromUtf8("spinMoveZ"));
        spinMoveZ->setAlignment(Qt::AlignCenter);
        spinMoveZ->setMinimum(-100.000000000000000);
        spinMoveZ->setMaximum(100.000000000000000);
        spinMoveZ->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(spinMoveZ, 2, 3, 1, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setFont(font);

        gridLayout_6->addWidget(label_20, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_2, 15, 2, 1, 1);

        sliderZoom = new QSlider(centralwidget);
        sliderZoom->setObjectName(QString::fromUtf8("sliderZoom"));
        sizePolicy1.setHeightForWidth(sliderZoom->sizePolicy().hasHeightForWidth());
        sliderZoom->setSizePolicy(sizePolicy1);
        sliderZoom->setMinimum(3);
        sliderZoom->setMaximum(40);
        sliderZoom->setPageStep(1000);
        sliderZoom->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(sliderZoom, 8, 3, 1, 1);

        bgColor = new QPushButton(centralwidget);
        bgColor->setObjectName(QString::fromUtf8("bgColor"));

        gridLayout_6->addWidget(bgColor, 9, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_6, 3, 0, 2, 1);

        spinRotX = new QDoubleSpinBox(centralwidget);
        spinRotX->setObjectName(QString::fromUtf8("spinRotX"));
        sizePolicy1.setHeightForWidth(spinRotX->sizePolicy().hasHeightForWidth());
        spinRotX->setSizePolicy(sizePolicy1);
        spinRotX->setFont(font);
        spinRotX->setAlignment(Qt::AlignCenter);
        spinRotX->setMinimum(-1000.000000000000000);
        spinRotX->setMaximum(1000.000000000000000);
        spinRotX->setSingleStep(10.000000000000000);

        gridLayout_6->addWidget(spinRotX, 4, 1, 1, 1);

        boxFacets = new QComboBox(centralwidget);
        boxFacets->addItem(QString());
        boxFacets->addItem(QString());
        boxFacets->setObjectName(QString::fromUtf8("boxFacets"));
        sizePolicy1.setHeightForWidth(boxFacets->sizePolicy().hasHeightForWidth());
        boxFacets->setSizePolicy(sizePolicy1);
        boxFacets->setFont(font);
        boxFacets->setMaxVisibleItems(3);
        boxFacets->setMaxCount(3);

        gridLayout_6->addWidget(boxFacets, 5, 3, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);
        label_23->setFont(font);

        gridLayout_6->addWidget(label_23, 5, 0, 1, 1);

        boxVertex = new QComboBox(centralwidget);
        boxVertex->addItem(QString());
        boxVertex->addItem(QString());
        boxVertex->addItem(QString());
        boxVertex->setObjectName(QString::fromUtf8("boxVertex"));
        sizePolicy1.setHeightForWidth(boxVertex->sizePolicy().hasHeightForWidth());
        boxVertex->setSizePolicy(sizePolicy1);
        boxVertex->setFont(font);
        boxVertex->setMaxVisibleItems(3);
        boxVertex->setMaxCount(3);

        gridLayout_6->addWidget(boxVertex, 5, 1, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_8, 3, 2, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 1, 3, 1, 1);

        spinDotSize = new QDoubleSpinBox(centralwidget);
        spinDotSize->setObjectName(QString::fromUtf8("spinDotSize"));
        spinDotSize->setFont(font);
        spinDotSize->setAlignment(Qt::AlignCenter);
        spinDotSize->setMinimum(5.000000000000000);
        spinDotSize->setSingleStep(0.500000000000000);

        gridLayout_6->addWidget(spinDotSize, 7, 1, 1, 1);

        saveBMP = new QPushButton(centralwidget);
        saveBMP->setObjectName(QString::fromUtf8("saveBMP"));

        gridLayout_6->addWidget(saveBMP, 10, 1, 1, 1);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);
        label_25->setFont(font);

        gridLayout_6->addWidget(label_25, 7, 0, 1, 1);

        spinRotZ = new QDoubleSpinBox(centralwidget);
        spinRotZ->setObjectName(QString::fromUtf8("spinRotZ"));
        sizePolicy1.setHeightForWidth(spinRotZ->sizePolicy().hasHeightForWidth());
        spinRotZ->setSizePolicy(sizePolicy1);
        spinRotZ->setFont(font);
        spinRotZ->setAlignment(Qt::AlignCenter);
        spinRotZ->setMinimum(-1000.000000000000000);
        spinRotZ->setMaximum(1000.000000000000000);
        spinRotZ->setSingleStep(10.000000000000000);

        gridLayout_6->addWidget(spinRotZ, 4, 3, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_10, 8, 2, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_6->addWidget(label_12, 12, 0, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_9, 3, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 1, 1, 1, 1);

        autorotate = new QCheckBox(centralwidget);
        autorotate->setObjectName(QString::fromUtf8("autorotate"));
        sizePolicy1.setHeightForWidth(autorotate->sizePolicy().hasHeightForWidth());
        autorotate->setSizePolicy(sizePolicy1);
        autorotate->setLayoutDirection(Qt::LeftToRight);

        gridLayout_6->addWidget(autorotate, 9, 3, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_7, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(16, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_3, 11, 2, 1, 1);

        spinLineSize = new QDoubleSpinBox(centralwidget);
        spinLineSize->setObjectName(QString::fromUtf8("spinLineSize"));
        spinLineSize->setFont(font);
        spinLineSize->setAlignment(Qt::AlignCenter);
        spinLineSize->setMinimum(0.100000000000000);
        spinLineSize->setSingleStep(0.500000000000000);

        gridLayout_6->addWidget(spinLineSize, 7, 3, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);
        label_19->setFont(font);

        gridLayout_6->addWidget(label_19, 8, 0, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setFont(font);

        gridLayout_6->addWidget(label_22, 7, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label, 1, 0, 2, 1);

        facetColor = new QPushButton(centralwidget);
        facetColor->setObjectName(QString::fromUtf8("facetColor"));

        gridLayout_6->addWidget(facetColor, 6, 3, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_14, 13, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_4, 1, 2, 1, 1);

        saveGIF = new QPushButton(centralwidget);
        saveGIF->setObjectName(QString::fromUtf8("saveGIF"));

        gridLayout_6->addWidget(saveGIF, 10, 2, 1, 1);

        spinMoveX = new QDoubleSpinBox(centralwidget);
        spinMoveX->setObjectName(QString::fromUtf8("spinMoveX"));
        spinMoveX->setAlignment(Qt::AlignCenter);
        spinMoveX->setDecimals(2);
        spinMoveX->setMinimum(-100.000000000000000);
        spinMoveX->setMaximum(100.000000000000000);
        spinMoveX->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(spinMoveX, 2, 1, 1, 1);

        spinMoveY = new QDoubleSpinBox(centralwidget);
        spinMoveY->setObjectName(QString::fromUtf8("spinMoveY"));
        spinMoveY->setAlignment(Qt::AlignCenter);
        spinMoveY->setMinimum(-100.000000000000000);
        spinMoveY->setMaximum(100.000000000000000);
        spinMoveY->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(spinMoveY, 2, 2, 1, 1);

        fileDialog = new QToolButton(centralwidget);
        fileDialog->setObjectName(QString::fromUtf8("fileDialog"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileDialog->sizePolicy().hasHeightForWidth());
        fileDialog->setSizePolicy(sizePolicy2);
        fileDialog->setFont(font);
        fileDialog->setLayoutDirection(Qt::RightToLeft);

        gridLayout_6->addWidget(fileDialog, 12, 3, 1, 1);

        fileName = new QLabel(centralwidget);
        fileName->setObjectName(QString::fromUtf8("fileName"));
        sizePolicy1.setHeightForWidth(fileName->sizePolicy().hasHeightForWidth());
        fileName->setSizePolicy(sizePolicy1);
        fileName->setFont(font);
        fileName->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(fileName, 12, 1, 1, 2);

        countVertex = new QLabel(centralwidget);
        countVertex->setObjectName(QString::fromUtf8("countVertex"));
        sizePolicy1.setHeightForWidth(countVertex->sizePolicy().hasHeightForWidth());
        countVertex->setSizePolicy(sizePolicy1);
        countVertex->setFont(font);
        countVertex->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(countVertex, 13, 1, 1, 2);

        countFacets = new QLabel(centralwidget);
        countFacets->setObjectName(QString::fromUtf8("countFacets"));
        sizePolicy1.setHeightForWidth(countFacets->sizePolicy().hasHeightForWidth());
        countFacets->setSizePolicy(sizePolicy1);
        countFacets->setFont(font);
        countFacets->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(countFacets, 14, 1, 1, 2);

        labelTimer = new QLabel(centralwidget);
        labelTimer->setObjectName(QString::fromUtf8("labelTimer"));
        labelTimer->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(labelTimer, 10, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("PT Sans")});
        statusBar->setFont(font1);
        statusBar->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        boxProjection->setCurrentIndex(0);
        boxFacets->setCurrentIndex(0);
        boxVertex->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        boxProjection->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        boxProjection->setItemText(1, QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));

        label_24->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\273\320\270\320\275\320\270\320\271:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\265\320\261\320\265\321\200:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        saveJPEG->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\320\270\320\275 JPEG", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\262\321\200\320\260\321\211\320\265\320\275\320\270\320\265:", nullptr));
        vertexColor->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\273\320\270\320\275\320\270\320\271:", nullptr));
        bgColor->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276:", nullptr));
        boxFacets->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        boxFacets->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", nullptr));

        label_23->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        boxVertex->setItemText(0, QCoreApplication::translate("MainWindow", "\320\221\320\265\320\267 \321\202\320\276\321\207\320\265\320\272", nullptr));
        boxVertex->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202\320\275\321\213\320\265", nullptr));
        boxVertex->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263\320\273\321\213\320\265", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        saveBMP->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\320\270\320\275 BMP", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        autorotate->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \320\273\320\270\320\275\320\270\320\271:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\320\265\320\273\321\214\320\275\320\276:", nullptr));
        facetColor->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        saveGIF->setText(QCoreApplication::translate("MainWindow", "\320\223\320\270\321\204\320\272\320\260", nullptr));
        fileDialog->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200 ...", nullptr));
        fileName->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265 \320\276\321\202\320\272\321\200\321\213\321\202", nullptr));
        countVertex->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        countFacets->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelTimer->setText(QString());
#if QT_CONFIG(statustip)
        statusBar->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        statusBar->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
