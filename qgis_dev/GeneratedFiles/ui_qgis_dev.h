/********************************************************************************
** Form generated from reading UI file 'qgis_dev.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGIS_DEV_H
#define UI_QGIS_DEV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qgis_devClass
{
public:
    QAction *actionOpen_Project;
    QAction *actionSave_Project;
    QAction *actionExit;
    QAction *actionAdd_Vector;
    QAction *actionAdd_Raster;
    QAction *actionNew_Project;
    QAction *actionToggle_Overview;
    QAction *actionLocalHistogramStretch;
    QAction *actionFullHistogramStretch;
    QAction *actionLocalCumulativeCutStretch;
    QAction *actionFullCumulativeCutStretch;
    QAction *actionIncreaseBrightness;
    QAction *actionIncreaseContrast;
    QAction *actionDecreaseBrightness;
    QAction *actionDecreaseContrast;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionPan;
    QAction *actionZoomFull;
    QAction *actionIdentify;
    QAction *actionAddWMSlayer;
    QAction *actionAdd_WCF_Layer;
    QAction *actionAdd_WFS_Layer;
    QAction *actionNew_Vector;
    QAction *actionNew_Memory_Vector_Layer;
    QAction *actionAll_Edits;
    QAction *actionToggle_Editing;
    QAction *actionSaveLayer_Edits;
    QAction *actionAdd_Feature;
    QAction *actionMove_Feature;
    QAction *actionNode_Tool;
    QAction *actionDelete_Selected;
    QAction *actionCut_Features;
    QAction *actionCopy_Features;
    QAction *actionPaste_Features;
    QAction *actionActionNullMapTool;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuVector;
    QMenu *menuRaster;
    QMenu *menuView;
    QToolBar *m_project_toolBar;
    QStatusBar *statusBar;
    QToolBar *m_raster_toolBar;
    QToolBar *m_mapTools_toolBar;
    QToolBar *m_addData_toolBar;
    QToolBar *m_editor_toolBar;

    void setupUi(QMainWindow *qgis_devClass)
    {
        if (qgis_devClass->objectName().isEmpty())
            qgis_devClass->setObjectName(QString::fromUtf8("qgis_devClass"));
        qgis_devClass->setWindowModality(Qt::NonModal);
        qgis_devClass->resize(926, 580);
        qgis_devClass->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/qgis-icon-60x60.png"), QSize(), QIcon::Normal, QIcon::Off);
        qgis_devClass->setWindowIcon(icon);
        qgis_devClass->setAutoFillBackground(true);
        qgis_devClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        qgis_devClass->setAnimated(true);
        qgis_devClass->setDocumentMode(false);
        actionOpen_Project = new QAction(qgis_devClass);
        actionOpen_Project->setObjectName(QString::fromUtf8("actionOpen_Project"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Project->setIcon(icon1);
        actionSave_Project = new QAction(qgis_devClass);
        actionSave_Project->setObjectName(QString::fromUtf8("actionSave_Project"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Project->setIcon(icon2);
        actionExit = new QAction(qgis_devClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFileExit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionAdd_Vector = new QAction(qgis_devClass);
        actionAdd_Vector->setObjectName(QString::fromUtf8("actionAdd_Vector"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionAddOgrLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Vector->setIcon(icon4);
        actionAdd_Raster = new QAction(qgis_devClass);
        actionAdd_Raster->setObjectName(QString::fromUtf8("actionAdd_Raster"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionAddRasterLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Raster->setIcon(icon5);
        actionNew_Project = new QAction(qgis_devClass);
        actionNew_Project->setObjectName(QString::fromUtf8("actionNew_Project"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionFileNew.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Project->setIcon(icon6);
        actionToggle_Overview = new QAction(qgis_devClass);
        actionToggle_Overview->setObjectName(QString::fromUtf8("actionToggle_Overview"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionInOverview.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggle_Overview->setIcon(icon7);
        actionLocalHistogramStretch = new QAction(qgis_devClass);
        actionLocalHistogramStretch->setObjectName(QString::fromUtf8("actionLocalHistogramStretch"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionLocalHistogramStretch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLocalHistogramStretch->setIcon(icon8);
        actionFullHistogramStretch = new QAction(qgis_devClass);
        actionFullHistogramStretch->setObjectName(QString::fromUtf8("actionFullHistogramStretch"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionFullHistogramStretch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullHistogramStretch->setIcon(icon9);
        actionLocalCumulativeCutStretch = new QAction(qgis_devClass);
        actionLocalCumulativeCutStretch->setObjectName(QString::fromUtf8("actionLocalCumulativeCutStretch"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionLocalCumulativeCutStretch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLocalCumulativeCutStretch->setIcon(icon10);
        actionFullCumulativeCutStretch = new QAction(qgis_devClass);
        actionFullCumulativeCutStretch->setObjectName(QString::fromUtf8("actionFullCumulativeCutStretch"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionFullCumulativeCutStretch.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullCumulativeCutStretch->setIcon(icon11);
        actionIncreaseBrightness = new QAction(qgis_devClass);
        actionIncreaseBrightness->setObjectName(QString::fromUtf8("actionIncreaseBrightness"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionIncreaseBrightness.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncreaseBrightness->setIcon(icon12);
        actionIncreaseContrast = new QAction(qgis_devClass);
        actionIncreaseContrast->setObjectName(QString::fromUtf8("actionIncreaseContrast"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionIncreaseContrast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncreaseContrast->setIcon(icon13);
        actionDecreaseBrightness = new QAction(qgis_devClass);
        actionDecreaseBrightness->setObjectName(QString::fromUtf8("actionDecreaseBrightness"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionDecreaseBrightness.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecreaseBrightness->setIcon(icon14);
        actionDecreaseContrast = new QAction(qgis_devClass);
        actionDecreaseContrast->setObjectName(QString::fromUtf8("actionDecreaseContrast"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionDecreaseContrast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecreaseContrast->setIcon(icon15);
        actionZoomIn = new QAction(qgis_devClass);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon16);
        actionZoomOut = new QAction(qgis_devClass);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon17);
        actionPan = new QAction(qgis_devClass);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/mActionPan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionPan->setIcon(icon18);
        actionZoomFull = new QAction(qgis_devClass);
        actionZoomFull->setObjectName(QString::fromUtf8("actionZoomFull"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomFull->setIcon(icon19);
        actionIdentify = new QAction(qgis_devClass);
        actionIdentify->setObjectName(QString::fromUtf8("actionIdentify"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/themes/default/mActionIdentify.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionIdentify->setIcon(icon20);
        actionAddWMSlayer = new QAction(qgis_devClass);
        actionAddWMSlayer->setObjectName(QString::fromUtf8("actionAddWMSlayer"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/themes/default/mActionAddWmsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddWMSlayer->setIcon(icon21);
        actionAdd_WCF_Layer = new QAction(qgis_devClass);
        actionAdd_WCF_Layer->setObjectName(QString::fromUtf8("actionAdd_WCF_Layer"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/themes/default/mActionAddWcsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_WCF_Layer->setIcon(icon22);
        actionAdd_WFS_Layer = new QAction(qgis_devClass);
        actionAdd_WFS_Layer->setObjectName(QString::fromUtf8("actionAdd_WFS_Layer"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/themes/default/mActionAddWfsLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_WFS_Layer->setIcon(icon23);
        actionNew_Vector = new QAction(qgis_devClass);
        actionNew_Vector->setObjectName(QString::fromUtf8("actionNew_Vector"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/themes/default/mActionNewVectorLayer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Vector->setIcon(icon24);
        actionNew_Memory_Vector_Layer = new QAction(qgis_devClass);
        actionNew_Memory_Vector_Layer->setObjectName(QString::fromUtf8("actionNew_Memory_Vector_Layer"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/themes/default/mActionCreateMemory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Memory_Vector_Layer->setIcon(icon25);
        actionAll_Edits = new QAction(qgis_devClass);
        actionAll_Edits->setObjectName(QString::fromUtf8("actionAll_Edits"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/themes/default/mActionAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAll_Edits->setIcon(icon26);
        actionToggle_Editing = new QAction(qgis_devClass);
        actionToggle_Editing->setObjectName(QString::fromUtf8("actionToggle_Editing"));
        actionToggle_Editing->setCheckable(true);
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggle_Editing->setIcon(icon27);
        actionSaveLayer_Edits = new QAction(qgis_devClass);
        actionSaveLayer_Edits->setObjectName(QString::fromUtf8("actionSaveLayer_Edits"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAllEdits.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveLayer_Edits->setIcon(icon28);
        actionAdd_Feature = new QAction(qgis_devClass);
        actionAdd_Feature->setObjectName(QString::fromUtf8("actionAdd_Feature"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/themes/default/mActionCapturePoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Feature->setIcon(icon29);
        actionMove_Feature = new QAction(qgis_devClass);
        actionMove_Feature->setObjectName(QString::fromUtf8("actionMove_Feature"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/themes/default/mActionMoveFeature.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMove_Feature->setIcon(icon30);
        actionNode_Tool = new QAction(qgis_devClass);
        actionNode_Tool->setObjectName(QString::fromUtf8("actionNode_Tool"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/themes/default/mActionNodeTool.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNode_Tool->setIcon(icon31);
        actionDelete_Selected = new QAction(qgis_devClass);
        actionDelete_Selected->setObjectName(QString::fromUtf8("actionDelete_Selected"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Selected->setIcon(icon32);
        actionCut_Features = new QAction(qgis_devClass);
        actionCut_Features->setObjectName(QString::fromUtf8("actionCut_Features"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_Features->setIcon(icon33);
        actionCopy_Features = new QAction(qgis_devClass);
        actionCopy_Features->setObjectName(QString::fromUtf8("actionCopy_Features"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_Features->setIcon(icon34);
        actionPaste_Features = new QAction(qgis_devClass);
        actionPaste_Features->setObjectName(QString::fromUtf8("actionPaste_Features"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/images/themes/default/mActionEditPaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_Features->setIcon(icon35);
        actionActionNullMapTool = new QAction(qgis_devClass);
        actionActionNullMapTool->setObjectName(QString::fromUtf8("actionActionNullMapTool"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/themes/default/mAction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionActionNullMapTool->setIcon(icon36);
        centralWidget = new QWidget(qgis_devClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        qgis_devClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qgis_devClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 926, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuVector = new QMenu(menuBar);
        menuVector->setObjectName(QString::fromUtf8("menuVector"));
        menuRaster = new QMenu(menuBar);
        menuRaster->setObjectName(QString::fromUtf8("menuRaster"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        qgis_devClass->setMenuBar(menuBar);
        m_project_toolBar = new QToolBar(qgis_devClass);
        m_project_toolBar->setObjectName(QString::fromUtf8("m_project_toolBar"));
        qgis_devClass->addToolBar(Qt::TopToolBarArea, m_project_toolBar);
        statusBar = new QStatusBar(qgis_devClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qgis_devClass->setStatusBar(statusBar);
        m_raster_toolBar = new QToolBar(qgis_devClass);
        m_raster_toolBar->setObjectName(QString::fromUtf8("m_raster_toolBar"));
        qgis_devClass->addToolBar(Qt::TopToolBarArea, m_raster_toolBar);
        m_mapTools_toolBar = new QToolBar(qgis_devClass);
        m_mapTools_toolBar->setObjectName(QString::fromUtf8("m_mapTools_toolBar"));
        qgis_devClass->addToolBar(Qt::TopToolBarArea, m_mapTools_toolBar);
        m_addData_toolBar = new QToolBar(qgis_devClass);
        m_addData_toolBar->setObjectName(QString::fromUtf8("m_addData_toolBar"));
        qgis_devClass->addToolBar(Qt::LeftToolBarArea, m_addData_toolBar);
        m_editor_toolBar = new QToolBar(qgis_devClass);
        m_editor_toolBar->setObjectName(QString::fromUtf8("m_editor_toolBar"));
        qgis_devClass->addToolBar(Qt::TopToolBarArea, m_editor_toolBar);
        qgis_devClass->insertToolBarBreak(m_editor_toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuVector->menuAction());
        menuBar->addAction(menuRaster->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(actionNew_Project);
        menuFile->addAction(actionOpen_Project);
        menuFile->addAction(actionSave_Project);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuVector->addAction(actionAdd_Vector);
        menuVector->addAction(actionAdd_WFS_Layer);
        menuVector->addSeparator();
        menuVector->addAction(actionNew_Vector);
        menuVector->addAction(actionNew_Memory_Vector_Layer);
        menuRaster->addAction(actionAdd_Raster);
        menuRaster->addAction(actionAddWMSlayer);
        menuRaster->addAction(actionAdd_WCF_Layer);
        menuRaster->addSeparator();
        menuRaster->addAction(actionLocalHistogramStretch);
        menuRaster->addAction(actionFullHistogramStretch);
        menuRaster->addAction(actionLocalCumulativeCutStretch);
        menuRaster->addAction(actionFullCumulativeCutStretch);
        menuRaster->addAction(actionIncreaseContrast);
        menuRaster->addAction(actionDecreaseContrast);
        menuRaster->addAction(actionIncreaseBrightness);
        menuRaster->addAction(actionDecreaseBrightness);
        menuView->addAction(actionToggle_Overview);
        m_project_toolBar->addAction(actionNew_Project);
        m_project_toolBar->addAction(actionOpen_Project);
        m_project_toolBar->addAction(actionSave_Project);
        m_project_toolBar->addAction(actionAdd_Vector);
        m_project_toolBar->addAction(actionAdd_Raster);
        m_raster_toolBar->addAction(actionLocalCumulativeCutStretch);
        m_raster_toolBar->addAction(actionFullCumulativeCutStretch);
        m_raster_toolBar->addAction(actionLocalHistogramStretch);
        m_raster_toolBar->addAction(actionFullHistogramStretch);
        m_raster_toolBar->addAction(actionIncreaseBrightness);
        m_raster_toolBar->addAction(actionDecreaseBrightness);
        m_raster_toolBar->addAction(actionIncreaseContrast);
        m_raster_toolBar->addAction(actionDecreaseContrast);
        m_mapTools_toolBar->addAction(actionPan);
        m_mapTools_toolBar->addAction(actionZoomFull);
        m_mapTools_toolBar->addAction(actionZoomIn);
        m_mapTools_toolBar->addAction(actionZoomOut);
        m_mapTools_toolBar->addAction(actionIdentify);
        m_mapTools_toolBar->addAction(actionActionNullMapTool);
        m_addData_toolBar->addAction(actionAdd_Vector);
        m_addData_toolBar->addAction(actionAdd_Raster);
        m_addData_toolBar->addAction(actionAddWMSlayer);
        m_addData_toolBar->addAction(actionAdd_WCF_Layer);
        m_addData_toolBar->addAction(actionAdd_WFS_Layer);
        m_addData_toolBar->addAction(actionNew_Vector);
        m_addData_toolBar->addAction(actionNew_Memory_Vector_Layer);
        m_editor_toolBar->addAction(actionAll_Edits);
        m_editor_toolBar->addAction(actionToggle_Editing);
        m_editor_toolBar->addAction(actionSaveLayer_Edits);
        m_editor_toolBar->addAction(actionAdd_Feature);
        m_editor_toolBar->addAction(actionMove_Feature);
        m_editor_toolBar->addAction(actionNode_Tool);
        m_editor_toolBar->addAction(actionDelete_Selected);
        m_editor_toolBar->addAction(actionCut_Features);
        m_editor_toolBar->addAction(actionCopy_Features);
        m_editor_toolBar->addAction(actionPaste_Features);

        retranslateUi(qgis_devClass);

        QMetaObject::connectSlotsByName(qgis_devClass);
    } // setupUi

    void retranslateUi(QMainWindow *qgis_devClass)
    {
        qgis_devClass->setWindowTitle(QApplication::translate("qgis_devClass", "qgis_dev", 0, QApplication::UnicodeUTF8));
        actionOpen_Project->setText(QApplication::translate("qgis_devClass", "Open Project", 0, QApplication::UnicodeUTF8));
        actionSave_Project->setText(QApplication::translate("qgis_devClass", "Save Project", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("qgis_devClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionAdd_Vector->setText(QApplication::translate("qgis_devClass", "Add Vector", 0, QApplication::UnicodeUTF8));
        actionAdd_Raster->setText(QApplication::translate("qgis_devClass", "Add Raster", 0, QApplication::UnicodeUTF8));
        actionNew_Project->setText(QApplication::translate("qgis_devClass", "New Project", 0, QApplication::UnicodeUTF8));
        actionToggle_Overview->setText(QApplication::translate("qgis_devClass", "Toggle Overview", 0, QApplication::UnicodeUTF8));
        actionLocalHistogramStretch->setText(QApplication::translate("qgis_devClass", "Local Histogram Stretch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLocalHistogramStretch->setToolTip(QApplication::translate("qgis_devClass", "Local Histogram Stretch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFullHistogramStretch->setText(QApplication::translate("qgis_devClass", "Full Histogram Stretch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFullHistogramStretch->setToolTip(QApplication::translate("qgis_devClass", "Full Histogram Stretch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLocalCumulativeCutStretch->setText(QApplication::translate("qgis_devClass", "Local Cumulative Cut Stretch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLocalCumulativeCutStretch->setToolTip(QApplication::translate("qgis_devClass", "Local Cumulative Cut Stretch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFullCumulativeCutStretch->setText(QApplication::translate("qgis_devClass", "Full Dataset Cumulative Cut Stretch", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFullCumulativeCutStretch->setToolTip(QApplication::translate("qgis_devClass", "Full Dataset Cumulative Cut Stretch", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseBrightness->setText(QApplication::translate("qgis_devClass", "Increase Brightness", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseBrightness->setToolTip(QApplication::translate("qgis_devClass", "Increase Brightness", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIncreaseContrast->setText(QApplication::translate("qgis_devClass", "Increase Contrast", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIncreaseContrast->setToolTip(QApplication::translate("qgis_devClass", "Increase Contrast", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseBrightness->setText(QApplication::translate("qgis_devClass", "Decrease Brightness", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseBrightness->setToolTip(QApplication::translate("qgis_devClass", "Decrease Brightness", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDecreaseContrast->setText(QApplication::translate("qgis_devClass", "Decrease Contrast", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDecreaseContrast->setToolTip(QApplication::translate("qgis_devClass", "Decrease Contrast", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setText(QApplication::translate("qgis_devClass", "Zoom In", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("qgis_devClass", "Zoom In", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setText(QApplication::translate("qgis_devClass", "Zoom Out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("qgis_devClass", "Zoom out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPan->setText(QApplication::translate("qgis_devClass", "Pan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPan->setToolTip(QApplication::translate("qgis_devClass", "Pan", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomFull->setText(QApplication::translate("qgis_devClass", "Zoom Full", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomFull->setToolTip(QApplication::translate("qgis_devClass", "Zoom Full", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionIdentify->setText(QApplication::translate("qgis_devClass", "Identify", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionIdentify->setToolTip(QApplication::translate("qgis_devClass", "Identify", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddWMSlayer->setText(QApplication::translate("qgis_devClass", "Add WMS Layer", 0, QApplication::UnicodeUTF8));
        actionAdd_WCF_Layer->setText(QApplication::translate("qgis_devClass", "Add WCS Layer", 0, QApplication::UnicodeUTF8));
        actionAdd_WFS_Layer->setText(QApplication::translate("qgis_devClass", "Add WFS Layer", 0, QApplication::UnicodeUTF8));
        actionNew_Vector->setText(QApplication::translate("qgis_devClass", "New Vector", 0, QApplication::UnicodeUTF8));
        actionNew_Memory_Vector_Layer->setText(QApplication::translate("qgis_devClass", "New Memory Vector Layer", 0, QApplication::UnicodeUTF8));
        actionAll_Edits->setText(QApplication::translate("qgis_devClass", "All Edits", 0, QApplication::UnicodeUTF8));
        actionToggle_Editing->setText(QApplication::translate("qgis_devClass", "Toggle Editing", 0, QApplication::UnicodeUTF8));
        actionSaveLayer_Edits->setText(QApplication::translate("qgis_devClass", "SaveLayer Edits", 0, QApplication::UnicodeUTF8));
        actionAdd_Feature->setText(QApplication::translate("qgis_devClass", "Add Feature", 0, QApplication::UnicodeUTF8));
        actionMove_Feature->setText(QApplication::translate("qgis_devClass", "Move Feature", 0, QApplication::UnicodeUTF8));
        actionNode_Tool->setText(QApplication::translate("qgis_devClass", "Node Tool", 0, QApplication::UnicodeUTF8));
        actionDelete_Selected->setText(QApplication::translate("qgis_devClass", "Delet Selected", 0, QApplication::UnicodeUTF8));
        actionCut_Features->setText(QApplication::translate("qgis_devClass", "Cut Features", 0, QApplication::UnicodeUTF8));
        actionCopy_Features->setText(QApplication::translate("qgis_devClass", "Copy Features", 0, QApplication::UnicodeUTF8));
        actionPaste_Features->setText(QApplication::translate("qgis_devClass", "Paste Features", 0, QApplication::UnicodeUTF8));
        actionActionNullMapTool->setText(QApplication::translate("qgis_devClass", "actionNullMapTool", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("qgis_devClass", "File", 0, QApplication::UnicodeUTF8));
        menuVector->setTitle(QApplication::translate("qgis_devClass", "Vector", 0, QApplication::UnicodeUTF8));
        menuRaster->setTitle(QApplication::translate("qgis_devClass", "Raster", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("qgis_devClass", "View", 0, QApplication::UnicodeUTF8));
        m_project_toolBar->setWindowTitle(QApplication::translate("qgis_devClass", "Project Tool Bar", 0, QApplication::UnicodeUTF8));
        m_raster_toolBar->setWindowTitle(QApplication::translate("qgis_devClass", "RasterTool Bar", 0, QApplication::UnicodeUTF8));
        m_mapTools_toolBar->setWindowTitle(QApplication::translate("qgis_devClass", "Map Tools Tool Bar", 0, QApplication::UnicodeUTF8));
        m_addData_toolBar->setWindowTitle(QApplication::translate("qgis_devClass", "Add Data Tool Bar", 0, QApplication::UnicodeUTF8));
        m_editor_toolBar->setWindowTitle(QApplication::translate("qgis_devClass", "Editor Tool Bar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qgis_devClass: public Ui_qgis_devClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGIS_DEV_H
