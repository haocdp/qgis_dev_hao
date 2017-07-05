/********************************************************************************
** Form generated from reading UI file 'qgis_dev_layerPropDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGIS_DEV_LAYERPROPDIALOG_H
#define UI_QGIS_DEV_LAYERPROPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qgis_dev_layerPropDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *prop_tabWidget;
    QWidget *tab;
    QWidget *style_tab;
    QWidget *label_tab;
    QVBoxLayout *verticalLayout_24;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *m_label_checkBox;
    QFrame *m_labelingFrame;
    QWidget *diagram_tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *mDisplayDiagramsGroupBox;
    QVBoxLayout *verticalLayout_28;
    QScrollArea *mDiagramPropertiesScrollArea;
    QWidget *mScrollAreaWidgetContents;
    QVBoxLayout *scrollAreaLayout;
    QHBoxLayout *diagramTypeAndPriorityLayout;
    QLabel *mTypeLabel;
    QComboBox *diagramType_comboBox;
    QSpacerItem *horizontalSpacer_26;
    QLabel *mPriorityLabel;
    QLabel *mPriorityLowLabel;
    QSlider *mPrioritySlider;
    QLabel *mPriorityHighLabel;
    QHBoxLayout *appearanceLayout;
    QTabWidget *mDiagramPropertiesTabWidget;
    QWidget *mDiagramPropertiesTabWidgetPage1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *mBackgroundColorLabel;
    QLabel *mBarWidthLabel;
    QSlider *mTransparencySlider;
    QLabel *mPenWidthLabel;
    QLabel *mPenColorLabel;
    QLabel *mAngleOffsetLabel;
    QComboBox *mAngleOffsetComboBox;
    QPushButton *mBackgroundColorButton;
    QDoubleSpinBox *mPenWidthSpinBox;
    QLabel *mTransparencyLabel;
    QPushButton *mDiagramPenColorButton;
    QFontComboBox *font_comboBox;
    QDoubleSpinBox *mBarWidthSpinBox;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *mVisibilityGroupBox;
    QGridLayout *gridLayout_18;
    QFrame *mScaleDependentVisibilityOptionsFrame;
    QGridLayout *gridLayout_3;
    QLabel *mMinimumDiagramScaleLabel;
    QLabel *mMaximumDiagramScaleLabel;
    QLineEdit *mMinimumDiagramScaleLineEdit;
    QLineEdit *mMaximumDiagramScaleLineEdit;
    QWidget *mDiagramPropertiesTabWidgetPage2;
    QGridLayout *gridLayout_7;
    QCheckBox *mFixedSizeCheckBox;
    QSpacerItem *horizontalSpacer_28;
    QSpacerItem *verticalSpacer_4;
    QLabel *mDiagramUnitsLabel;
    QFrame *mLinearScaleFrame;
    QVBoxLayout *verticalLayout_29;
    QLabel *mLinearlyScalingLabel;
    QHBoxLayout *mLinearlyScalingLayout;
    QWidget *mAttributeBasedScalingOptions;
    QHBoxLayout *horizontalLayout_51;
    QLabel *mSizeAttributeLabel;
    QComboBox *mSizeAttributeComboBox;
    QPushButton *mSizeAttributeExpression;
    QPushButton *mFindMaximumValueButton;
    QLineEdit *mValueLineEdit;
    QLabel *mSizeLabel;
    QSpinBox *mSizeSpinBox;
    QLabel *mScaleDependencyLabel;
    QGroupBox *mIncreaseSmallDiagramsGroupBox;
    QHBoxLayout *horizontalLayout_52;
    QLabel *mIncreaseMinimumSizeLabel;
    QDoubleSpinBox *mIncreaseMinimumSizeSpinBox;
    QSpacerItem *horizontalSpacer_29;
    QWidget *mDiagramPropertiesTabWidgetPage3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_5;
    QLabel *mPlacementLabel;
    QComboBox *mPlacementComboBox;
    QLabel *mLineOptionsLabel;
    QComboBox *mLineOptionsComboBox;
    QLabel *mDiagramDistanceLabel;
    QDoubleSpinBox *mDiagramDistanceSpinBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *mDataDefinedPositionGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *mXPosColLabel;
    QLabel *mYPosColLabel;
    QSpacerItem *horizontalSpacer_30;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *mEngineSettingsButton;
    QWidget *mDiagramPropertiesTabOptions;
    QVBoxLayout *verticalLayout_30;
    QLabel *mLabelPlacementLabel;
    QComboBox *mLabelPlacementComboBox;
    QFrame *mOrientationFrame;
    QVBoxLayout *verticalLayout_31;
    QLabel *label_48;
    QRadioButton *mOrientationUpButton;
    QRadioButton *mOrientationDownButton;
    QRadioButton *mOrientationRightButton;
    QRadioButton *mOrientationLeftButton;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *mAttributesGroupBox;
    QHBoxLayout *horizontalLayout_53;
    QVBoxLayout *availAttributesLayout;
    QLabel *label_49;
    QTreeWidget *mAttributesTreeWidget;
    QVBoxLayout *attributeButtonLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *mAddAttributeExpression;
    QPushButton *mAddCategoryPushButton;
    QPushButton *mRemoveCategoryPushButton;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *assignedAttributesLayout;
    QLabel *Assigened;
    QTreeWidget *mDiagramAttributesTreeWidget;
    QWidget *field_tab;
    QWidget *metaData_tab;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *qgis_dev_layerPropDialog)
    {
        if (qgis_dev_layerPropDialog->objectName().isEmpty())
            qgis_dev_layerPropDialog->setObjectName(QString::fromUtf8("qgis_dev_layerPropDialog"));
        qgis_dev_layerPropDialog->resize(765, 702);
        verticalLayout = new QVBoxLayout(qgis_dev_layerPropDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        prop_tabWidget = new QTabWidget(qgis_dev_layerPropDialog);
        prop_tabWidget->setObjectName(QString::fromUtf8("prop_tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prop_tabWidget->sizePolicy().hasHeightForWidth());
        prop_tabWidget->setSizePolicy(sizePolicy);
        prop_tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        prop_tabWidget->setLayoutDirection(Qt::LeftToRight);
        prop_tabWidget->setAutoFillBackground(false);
        prop_tabWidget->setTabPosition(QTabWidget::West);
        prop_tabWidget->setTabShape(QTabWidget::Rounded);
        prop_tabWidget->setElideMode(Qt::ElideNone);
        prop_tabWidget->setDocumentMode(false);
        prop_tabWidget->setTabsClosable(false);
        prop_tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        prop_tabWidget->addTab(tab, QString());
        style_tab = new QWidget();
        style_tab->setObjectName(QString::fromUtf8("style_tab"));
        prop_tabWidget->addTab(style_tab, QString());
        label_tab = new QWidget();
        label_tab->setObjectName(QString::fromUtf8("label_tab"));
        verticalLayout_24 = new QVBoxLayout(label_tab);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        scrollArea = new QScrollArea(label_tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 702, 627));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        m_label_checkBox = new QCheckBox(scrollAreaWidgetContents);
        m_label_checkBox->setObjectName(QString::fromUtf8("m_label_checkBox"));

        verticalLayout_3->addWidget(m_label_checkBox);

        m_labelingFrame = new QFrame(scrollAreaWidgetContents);
        m_labelingFrame->setObjectName(QString::fromUtf8("m_labelingFrame"));
        m_labelingFrame->setFrameShape(QFrame::StyledPanel);
        m_labelingFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(m_labelingFrame);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_24->addWidget(scrollArea);

        prop_tabWidget->addTab(label_tab, QString());
        diagram_tab = new QWidget();
        diagram_tab->setObjectName(QString::fromUtf8("diagram_tab"));
        verticalLayout_2 = new QVBoxLayout(diagram_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mDisplayDiagramsGroupBox = new QGroupBox(diagram_tab);
        mDisplayDiagramsGroupBox->setObjectName(QString::fromUtf8("mDisplayDiagramsGroupBox"));
        mDisplayDiagramsGroupBox->setCheckable(true);
        verticalLayout_28 = new QVBoxLayout(mDisplayDiagramsGroupBox);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        mDiagramPropertiesScrollArea = new QScrollArea(mDisplayDiagramsGroupBox);
        mDiagramPropertiesScrollArea->setObjectName(QString::fromUtf8("mDiagramPropertiesScrollArea"));
        mDiagramPropertiesScrollArea->setFrameShape(QFrame::NoFrame);
        mDiagramPropertiesScrollArea->setFrameShadow(QFrame::Plain);
        mDiagramPropertiesScrollArea->setWidgetResizable(true);
        mScrollAreaWidgetContents = new QWidget();
        mScrollAreaWidgetContents->setObjectName(QString::fromUtf8("mScrollAreaWidgetContents"));
        mScrollAreaWidgetContents->setGeometry(QRect(0, 0, 684, 597));
        scrollAreaLayout = new QVBoxLayout(mScrollAreaWidgetContents);
        scrollAreaLayout->setObjectName(QString::fromUtf8("scrollAreaLayout"));
        diagramTypeAndPriorityLayout = new QHBoxLayout();
        diagramTypeAndPriorityLayout->setObjectName(QString::fromUtf8("diagramTypeAndPriorityLayout"));
        mTypeLabel = new QLabel(mScrollAreaWidgetContents);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));

        diagramTypeAndPriorityLayout->addWidget(mTypeLabel);

        diagramType_comboBox = new QComboBox(mScrollAreaWidgetContents);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/pie-chart.png"), QSize(), QIcon::Normal, QIcon::Off);
        diagramType_comboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/histogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        diagramType_comboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        diagramType_comboBox->addItem(icon2, QString());
        diagramType_comboBox->setObjectName(QString::fromUtf8("diagramType_comboBox"));

        diagramTypeAndPriorityLayout->addWidget(diagramType_comboBox);

        horizontalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        diagramTypeAndPriorityLayout->addItem(horizontalSpacer_26);

        mPriorityLabel = new QLabel(mScrollAreaWidgetContents);
        mPriorityLabel->setObjectName(QString::fromUtf8("mPriorityLabel"));

        diagramTypeAndPriorityLayout->addWidget(mPriorityLabel);

        mPriorityLowLabel = new QLabel(mScrollAreaWidgetContents);
        mPriorityLowLabel->setObjectName(QString::fromUtf8("mPriorityLowLabel"));

        diagramTypeAndPriorityLayout->addWidget(mPriorityLowLabel);

        mPrioritySlider = new QSlider(mScrollAreaWidgetContents);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setInvertedAppearance(false);
        mPrioritySlider->setInvertedControls(false);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        diagramTypeAndPriorityLayout->addWidget(mPrioritySlider);

        mPriorityHighLabel = new QLabel(mScrollAreaWidgetContents);
        mPriorityHighLabel->setObjectName(QString::fromUtf8("mPriorityHighLabel"));

        diagramTypeAndPriorityLayout->addWidget(mPriorityHighLabel);


        scrollAreaLayout->addLayout(diagramTypeAndPriorityLayout);

        appearanceLayout = new QHBoxLayout();
        appearanceLayout->setObjectName(QString::fromUtf8("appearanceLayout"));

        scrollAreaLayout->addLayout(appearanceLayout);

        mDiagramPropertiesTabWidget = new QTabWidget(mScrollAreaWidgetContents);
        mDiagramPropertiesTabWidget->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidget"));
        mDiagramPropertiesTabWidgetPage1 = new QWidget();
        mDiagramPropertiesTabWidgetPage1->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidgetPage1"));
        verticalLayout_4 = new QVBoxLayout(mDiagramPropertiesTabWidgetPage1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mBackgroundColorLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        gridLayout_2->addWidget(mBackgroundColorLabel, 3, 1, 1, 1);

        mBarWidthLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mBarWidthLabel->setObjectName(QString::fromUtf8("mBarWidthLabel"));

        gridLayout_2->addWidget(mBarWidthLabel, 1, 1, 1, 1);

        mTransparencySlider = new QSlider(mDiagramPropertiesTabWidgetPage1);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        mTransparencySlider->setMinimumSize(QSize(300, 0));
        mTransparencySlider->setMaximum(255);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(mTransparencySlider, 2, 2, 1, 2);

        mPenWidthLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mPenWidthLabel->setObjectName(QString::fromUtf8("mPenWidthLabel"));

        gridLayout_2->addWidget(mPenWidthLabel, 5, 1, 1, 1);

        mPenColorLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mPenColorLabel->setObjectName(QString::fromUtf8("mPenColorLabel"));

        gridLayout_2->addWidget(mPenColorLabel, 4, 1, 1, 1);

        mAngleOffsetLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mAngleOffsetLabel->setObjectName(QString::fromUtf8("mAngleOffsetLabel"));

        gridLayout_2->addWidget(mAngleOffsetLabel, 6, 1, 1, 1);

        mAngleOffsetComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage1);
        mAngleOffsetComboBox->setObjectName(QString::fromUtf8("mAngleOffsetComboBox"));

        gridLayout_2->addWidget(mAngleOffsetComboBox, 6, 2, 1, 1);

        mBackgroundColorButton = new QPushButton(mDiagramPropertiesTabWidgetPage1);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setAutoFillBackground(false);
        mBackgroundColorButton->setIconSize(QSize(16, 16));
        mBackgroundColorButton->setFlat(false);

        gridLayout_2->addWidget(mBackgroundColorButton, 3, 2, 1, 1);

        mPenWidthSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage1);
        mPenWidthSpinBox->setObjectName(QString::fromUtf8("mPenWidthSpinBox"));
        mPenWidthSpinBox->setDecimals(5);
        mPenWidthSpinBox->setMaximum(100000);

        gridLayout_2->addWidget(mPenWidthSpinBox, 5, 2, 1, 1);

        mTransparencyLabel = new QLabel(mDiagramPropertiesTabWidgetPage1);
        mTransparencyLabel->setObjectName(QString::fromUtf8("mTransparencyLabel"));
        mTransparencyLabel->setMinimumSize(QSize(130, 0));

        gridLayout_2->addWidget(mTransparencyLabel, 2, 1, 1, 1);

        mDiagramPenColorButton = new QPushButton(mDiagramPropertiesTabWidgetPage1);
        mDiagramPenColorButton->setObjectName(QString::fromUtf8("mDiagramPenColorButton"));

        gridLayout_2->addWidget(mDiagramPenColorButton, 4, 2, 1, 1);

        font_comboBox = new QFontComboBox(mDiagramPropertiesTabWidgetPage1);
        font_comboBox->setObjectName(QString::fromUtf8("font_comboBox"));

        gridLayout_2->addWidget(font_comboBox, 7, 2, 1, 1);

        mBarWidthSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage1);
        mBarWidthSpinBox->setObjectName(QString::fromUtf8("mBarWidthSpinBox"));

        gridLayout_2->addWidget(mBarWidthSpinBox, 1, 2, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_2);

        horizontalSpacer_27 = new QSpacerItem(195, 54, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_27);


        verticalLayout_4->addLayout(horizontalLayout_4);

        mVisibilityGroupBox = new QGroupBox(mDiagramPropertiesTabWidgetPage1);
        mVisibilityGroupBox->setObjectName(QString::fromUtf8("mVisibilityGroupBox"));
        mVisibilityGroupBox->setCheckable(true);
        gridLayout_18 = new QGridLayout(mVisibilityGroupBox);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        mScaleDependentVisibilityOptionsFrame = new QFrame(mVisibilityGroupBox);
        mScaleDependentVisibilityOptionsFrame->setObjectName(QString::fromUtf8("mScaleDependentVisibilityOptionsFrame"));
        mScaleDependentVisibilityOptionsFrame->setFrameShape(QFrame::NoFrame);
        mScaleDependentVisibilityOptionsFrame->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(mScaleDependentVisibilityOptionsFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mMinimumDiagramScaleLabel = new QLabel(mScaleDependentVisibilityOptionsFrame);
        mMinimumDiagramScaleLabel->setObjectName(QString::fromUtf8("mMinimumDiagramScaleLabel"));

        gridLayout_3->addWidget(mMinimumDiagramScaleLabel, 0, 0, 1, 1);

        mMaximumDiagramScaleLabel = new QLabel(mScaleDependentVisibilityOptionsFrame);
        mMaximumDiagramScaleLabel->setObjectName(QString::fromUtf8("mMaximumDiagramScaleLabel"));

        gridLayout_3->addWidget(mMaximumDiagramScaleLabel, 1, 0, 1, 1);

        mMinimumDiagramScaleLineEdit = new QLineEdit(mScaleDependentVisibilityOptionsFrame);
        mMinimumDiagramScaleLineEdit->setObjectName(QString::fromUtf8("mMinimumDiagramScaleLineEdit"));

        gridLayout_3->addWidget(mMinimumDiagramScaleLineEdit, 0, 1, 1, 1);

        mMaximumDiagramScaleLineEdit = new QLineEdit(mScaleDependentVisibilityOptionsFrame);
        mMaximumDiagramScaleLineEdit->setObjectName(QString::fromUtf8("mMaximumDiagramScaleLineEdit"));

        gridLayout_3->addWidget(mMaximumDiagramScaleLineEdit, 1, 1, 1, 1);


        gridLayout_18->addWidget(mScaleDependentVisibilityOptionsFrame, 1, 1, 1, 1);


        verticalLayout_4->addWidget(mVisibilityGroupBox);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabWidgetPage1, QString());
        mDiagramPropertiesTabWidgetPage2 = new QWidget();
        mDiagramPropertiesTabWidgetPage2->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidgetPage2"));
        gridLayout_7 = new QGridLayout(mDiagramPropertiesTabWidgetPage2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mFixedSizeCheckBox = new QCheckBox(mDiagramPropertiesTabWidgetPage2);
        mFixedSizeCheckBox->setObjectName(QString::fromUtf8("mFixedSizeCheckBox"));

        gridLayout_7->addWidget(mFixedSizeCheckBox, 1, 0, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_28, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 12, 0, 1, 1);

        mDiagramUnitsLabel = new QLabel(mDiagramPropertiesTabWidgetPage2);
        mDiagramUnitsLabel->setObjectName(QString::fromUtf8("mDiagramUnitsLabel"));

        gridLayout_7->addWidget(mDiagramUnitsLabel, 4, 0, 1, 1);

        mLinearScaleFrame = new QFrame(mDiagramPropertiesTabWidgetPage2);
        mLinearScaleFrame->setObjectName(QString::fromUtf8("mLinearScaleFrame"));
        mLinearScaleFrame->setFrameShape(QFrame::NoFrame);
        mLinearScaleFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_29 = new QVBoxLayout(mLinearScaleFrame);
        verticalLayout_29->setContentsMargins(0, 0, 0, 0);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        mLinearlyScalingLabel = new QLabel(mLinearScaleFrame);
        mLinearlyScalingLabel->setObjectName(QString::fromUtf8("mLinearlyScalingLabel"));
        mLinearlyScalingLabel->setWordWrap(true);

        verticalLayout_29->addWidget(mLinearlyScalingLabel);

        mLinearlyScalingLayout = new QHBoxLayout();
        mLinearlyScalingLayout->setObjectName(QString::fromUtf8("mLinearlyScalingLayout"));
        mAttributeBasedScalingOptions = new QWidget(mLinearScaleFrame);
        mAttributeBasedScalingOptions->setObjectName(QString::fromUtf8("mAttributeBasedScalingOptions"));
        horizontalLayout_51 = new QHBoxLayout(mAttributeBasedScalingOptions);
        horizontalLayout_51->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        mSizeAttributeLabel = new QLabel(mAttributeBasedScalingOptions);
        mSizeAttributeLabel->setObjectName(QString::fromUtf8("mSizeAttributeLabel"));

        horizontalLayout_51->addWidget(mSizeAttributeLabel);

        mSizeAttributeComboBox = new QComboBox(mAttributeBasedScalingOptions);
        mSizeAttributeComboBox->setObjectName(QString::fromUtf8("mSizeAttributeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSizeAttributeComboBox->sizePolicy().hasHeightForWidth());
        mSizeAttributeComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_51->addWidget(mSizeAttributeComboBox);

        mSizeAttributeExpression = new QPushButton(mAttributeBasedScalingOptions);
        mSizeAttributeExpression->setObjectName(QString::fromUtf8("mSizeAttributeExpression"));
        mSizeAttributeExpression->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mIconExpressionEditorOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSizeAttributeExpression->setIcon(icon3);
        mSizeAttributeExpression->setIconSize(QSize(24, 16));

        horizontalLayout_51->addWidget(mSizeAttributeExpression);

        mFindMaximumValueButton = new QPushButton(mAttributeBasedScalingOptions);
        mFindMaximumValueButton->setObjectName(QString::fromUtf8("mFindMaximumValueButton"));

        horizontalLayout_51->addWidget(mFindMaximumValueButton);

        mValueLineEdit = new QLineEdit(mAttributeBasedScalingOptions);
        mValueLineEdit->setObjectName(QString::fromUtf8("mValueLineEdit"));

        horizontalLayout_51->addWidget(mValueLineEdit);


        mLinearlyScalingLayout->addWidget(mAttributeBasedScalingOptions);

        mSizeLabel = new QLabel(mLinearScaleFrame);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        mLinearlyScalingLayout->addWidget(mSizeLabel);

        mSizeSpinBox = new QSpinBox(mLinearScaleFrame);
        mSizeSpinBox->setObjectName(QString::fromUtf8("mSizeSpinBox"));
        mSizeSpinBox->setMaximum(10000000);
        mSizeSpinBox->setValue(50);

        mLinearlyScalingLayout->addWidget(mSizeSpinBox);

        mScaleDependencyLabel = new QLabel(mLinearScaleFrame);
        mScaleDependencyLabel->setObjectName(QString::fromUtf8("mScaleDependencyLabel"));

        mLinearlyScalingLayout->addWidget(mScaleDependencyLabel);


        verticalLayout_29->addLayout(mLinearlyScalingLayout);

        mIncreaseSmallDiagramsGroupBox = new QGroupBox(mLinearScaleFrame);
        mIncreaseSmallDiagramsGroupBox->setObjectName(QString::fromUtf8("mIncreaseSmallDiagramsGroupBox"));
        mIncreaseSmallDiagramsGroupBox->setCheckable(true);
        horizontalLayout_52 = new QHBoxLayout(mIncreaseSmallDiagramsGroupBox);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        mIncreaseMinimumSizeLabel = new QLabel(mIncreaseSmallDiagramsGroupBox);
        mIncreaseMinimumSizeLabel->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeLabel"));

        horizontalLayout_52->addWidget(mIncreaseMinimumSizeLabel);

        mIncreaseMinimumSizeSpinBox = new QDoubleSpinBox(mIncreaseSmallDiagramsGroupBox);
        mIncreaseMinimumSizeSpinBox->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeSpinBox"));

        horizontalLayout_52->addWidget(mIncreaseMinimumSizeSpinBox);

        horizontalSpacer_29 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_29);


        verticalLayout_29->addWidget(mIncreaseSmallDiagramsGroupBox);


        gridLayout_7->addWidget(mLinearScaleFrame, 6, 0, 1, 2);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabWidgetPage2, QString());
        mDiagramPropertiesTabWidgetPage3 = new QWidget();
        mDiagramPropertiesTabWidgetPage3->setObjectName(QString::fromUtf8("mDiagramPropertiesTabWidgetPage3"));
        gridLayout_4 = new QGridLayout(mDiagramPropertiesTabWidgetPage3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mPlacementLabel = new QLabel(mDiagramPropertiesTabWidgetPage3);
        mPlacementLabel->setObjectName(QString::fromUtf8("mPlacementLabel"));

        gridLayout_5->addWidget(mPlacementLabel, 0, 0, 1, 1);

        mPlacementComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage3);
        mPlacementComboBox->setObjectName(QString::fromUtf8("mPlacementComboBox"));

        gridLayout_5->addWidget(mPlacementComboBox, 0, 1, 1, 1);

        mLineOptionsLabel = new QLabel(mDiagramPropertiesTabWidgetPage3);
        mLineOptionsLabel->setObjectName(QString::fromUtf8("mLineOptionsLabel"));

        gridLayout_5->addWidget(mLineOptionsLabel, 1, 0, 1, 1);

        mLineOptionsComboBox = new QComboBox(mDiagramPropertiesTabWidgetPage3);
        mLineOptionsComboBox->setObjectName(QString::fromUtf8("mLineOptionsComboBox"));

        gridLayout_5->addWidget(mLineOptionsComboBox, 1, 1, 1, 1);

        mDiagramDistanceLabel = new QLabel(mDiagramPropertiesTabWidgetPage3);
        mDiagramDistanceLabel->setObjectName(QString::fromUtf8("mDiagramDistanceLabel"));

        gridLayout_5->addWidget(mDiagramDistanceLabel, 2, 0, 1, 1);

        mDiagramDistanceSpinBox = new QDoubleSpinBox(mDiagramPropertiesTabWidgetPage3);
        mDiagramDistanceSpinBox->setObjectName(QString::fromUtf8("mDiagramDistanceSpinBox"));

        gridLayout_5->addWidget(mDiagramDistanceSpinBox, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 4, 0, 1, 1);

        mDataDefinedPositionGroupBox = new QGroupBox(mDiagramPropertiesTabWidgetPage3);
        mDataDefinedPositionGroupBox->setObjectName(QString::fromUtf8("mDataDefinedPositionGroupBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mDataDefinedPositionGroupBox->sizePolicy().hasHeightForWidth());
        mDataDefinedPositionGroupBox->setSizePolicy(sizePolicy2);
        mDataDefinedPositionGroupBox->setCheckable(true);
        mDataDefinedPositionGroupBox->setChecked(false);
        gridLayout_6 = new QGridLayout(mDataDefinedPositionGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mXPosColLabel = new QLabel(mDataDefinedPositionGroupBox);
        mXPosColLabel->setObjectName(QString::fromUtf8("mXPosColLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mXPosColLabel->sizePolicy().hasHeightForWidth());
        mXPosColLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(mXPosColLabel, 0, 0, 2, 3);

        mYPosColLabel = new QLabel(mDataDefinedPositionGroupBox);
        mYPosColLabel->setObjectName(QString::fromUtf8("mYPosColLabel"));
        sizePolicy3.setHeightForWidth(mYPosColLabel->sizePolicy().hasHeightForWidth());
        mYPosColLabel->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(mYPosColLabel, 2, 0, 1, 1);


        gridLayout_4->addWidget(mDataDefinedPositionGroupBox, 2, 0, 1, 1);

        horizontalSpacer_30 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_30, 2, 1, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_31, 0, 1, 1, 1);

        mEngineSettingsButton = new QPushButton(mDiagramPropertiesTabWidgetPage3);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));

        gridLayout_4->addWidget(mEngineSettingsButton, 3, 0, 1, 1);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabWidgetPage3, QString());
        mDiagramPropertiesTabOptions = new QWidget();
        mDiagramPropertiesTabOptions->setObjectName(QString::fromUtf8("mDiagramPropertiesTabOptions"));
        verticalLayout_30 = new QVBoxLayout(mDiagramPropertiesTabOptions);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        mLabelPlacementLabel = new QLabel(mDiagramPropertiesTabOptions);
        mLabelPlacementLabel->setObjectName(QString::fromUtf8("mLabelPlacementLabel"));
        mLabelPlacementLabel->setVisible(false);
#ifndef QT_NO_TOOLTIP
        mLabelPlacementLabel->setToolTip(0u);
#endif // QT_NO_TOOLTIP

        verticalLayout_30->addWidget(mLabelPlacementLabel);

        mLabelPlacementComboBox = new QComboBox(mDiagramPropertiesTabOptions);
        mLabelPlacementComboBox->setObjectName(QString::fromUtf8("mLabelPlacementComboBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mLabelPlacementComboBox->sizePolicy().hasHeightForWidth());
        mLabelPlacementComboBox->setSizePolicy(sizePolicy4);
        mLabelPlacementComboBox->setMaximumSize(QSize(200, 16777215));
        mLabelPlacementComboBox->setVisible(false);

        verticalLayout_30->addWidget(mLabelPlacementComboBox);

        mOrientationFrame = new QFrame(mDiagramPropertiesTabOptions);
        mOrientationFrame->setObjectName(QString::fromUtf8("mOrientationFrame"));
        mOrientationFrame->setFrameShape(QFrame::NoFrame);
        mOrientationFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_31 = new QVBoxLayout(mOrientationFrame);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        label_48 = new QLabel(mOrientationFrame);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        verticalLayout_31->addWidget(label_48);

        mOrientationUpButton = new QRadioButton(mOrientationFrame);
        mOrientationUpButton->setObjectName(QString::fromUtf8("mOrientationUpButton"));
        mOrientationUpButton->setChecked(true);

        verticalLayout_31->addWidget(mOrientationUpButton);

        mOrientationDownButton = new QRadioButton(mOrientationFrame);
        mOrientationDownButton->setObjectName(QString::fromUtf8("mOrientationDownButton"));

        verticalLayout_31->addWidget(mOrientationDownButton);

        mOrientationRightButton = new QRadioButton(mOrientationFrame);
        mOrientationRightButton->setObjectName(QString::fromUtf8("mOrientationRightButton"));

        verticalLayout_31->addWidget(mOrientationRightButton);

        mOrientationLeftButton = new QRadioButton(mOrientationFrame);
        mOrientationLeftButton->setObjectName(QString::fromUtf8("mOrientationLeftButton"));

        verticalLayout_31->addWidget(mOrientationLeftButton);


        verticalLayout_30->addWidget(mOrientationFrame);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_3);

        mDiagramPropertiesTabWidget->addTab(mDiagramPropertiesTabOptions, QString());

        scrollAreaLayout->addWidget(mDiagramPropertiesTabWidget);

        mAttributesGroupBox = new QGroupBox(mScrollAreaWidgetContents);
        mAttributesGroupBox->setObjectName(QString::fromUtf8("mAttributesGroupBox"));
        horizontalLayout_53 = new QHBoxLayout(mAttributesGroupBox);
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        availAttributesLayout = new QVBoxLayout();
        availAttributesLayout->setObjectName(QString::fromUtf8("availAttributesLayout"));
        label_49 = new QLabel(mAttributesGroupBox);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        availAttributesLayout->addWidget(label_49);

        mAttributesTreeWidget = new QTreeWidget(mAttributesGroupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Attribute"));
        mAttributesTreeWidget->setHeaderItem(__qtreewidgetitem);
        mAttributesTreeWidget->setObjectName(QString::fromUtf8("mAttributesTreeWidget"));
        mAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mAttributesTreeWidget->setIndentation(0);
        mAttributesTreeWidget->setRootIsDecorated(false);
        mAttributesTreeWidget->setItemsExpandable(false);
        mAttributesTreeWidget->setExpandsOnDoubleClick(false);
        mAttributesTreeWidget->setColumnCount(1);

        availAttributesLayout->addWidget(mAttributesTreeWidget);


        horizontalLayout_53->addLayout(availAttributesLayout);

        attributeButtonLayout = new QVBoxLayout();
        attributeButtonLayout->setObjectName(QString::fromUtf8("attributeButtonLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer);

        mAddAttributeExpression = new QPushButton(mAttributesGroupBox);
        mAddAttributeExpression->setObjectName(QString::fromUtf8("mAddAttributeExpression"));
        mAddAttributeExpression->setEnabled(true);
        mAddAttributeExpression->setIcon(icon3);
        mAddAttributeExpression->setIconSize(QSize(24, 16));

        attributeButtonLayout->addWidget(mAddAttributeExpression);

        mAddCategoryPushButton = new QPushButton(mAttributesGroupBox);
        mAddCategoryPushButton->setObjectName(QString::fromUtf8("mAddCategoryPushButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mAddCategoryPushButton->sizePolicy().hasHeightForWidth());
        mAddCategoryPushButton->setSizePolicy(sizePolicy5);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCategoryPushButton->setIcon(icon4);

        attributeButtonLayout->addWidget(mAddCategoryPushButton);

        mRemoveCategoryPushButton = new QPushButton(mAttributesGroupBox);
        mRemoveCategoryPushButton->setObjectName(QString::fromUtf8("mRemoveCategoryPushButton"));
        sizePolicy5.setHeightForWidth(mRemoveCategoryPushButton->sizePolicy().hasHeightForWidth());
        mRemoveCategoryPushButton->setSizePolicy(sizePolicy5);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveCategoryPushButton->setIcon(icon5);

        attributeButtonLayout->addWidget(mRemoveCategoryPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer_5);


        horizontalLayout_53->addLayout(attributeButtonLayout);

        assignedAttributesLayout = new QVBoxLayout();
        assignedAttributesLayout->setObjectName(QString::fromUtf8("assignedAttributesLayout"));
        Assigened = new QLabel(mAttributesGroupBox);
        Assigened->setObjectName(QString::fromUtf8("Assigened"));

        assignedAttributesLayout->addWidget(Assigened);

        mDiagramAttributesTreeWidget = new QTreeWidget(mAttributesGroupBox);
        mDiagramAttributesTreeWidget->setObjectName(QString::fromUtf8("mDiagramAttributesTreeWidget"));
        mDiagramAttributesTreeWidget->setDragEnabled(true);
        mDiagramAttributesTreeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        mDiagramAttributesTreeWidget->setDefaultDropAction(Qt::TargetMoveAction);
        mDiagramAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mDiagramAttributesTreeWidget->setIndentation(0);
        mDiagramAttributesTreeWidget->setRootIsDecorated(false);
        mDiagramAttributesTreeWidget->setItemsExpandable(false);
        mDiagramAttributesTreeWidget->setColumnCount(2);

        assignedAttributesLayout->addWidget(mDiagramAttributesTreeWidget);


        horizontalLayout_53->addLayout(assignedAttributesLayout);


        scrollAreaLayout->addWidget(mAttributesGroupBox);

        mDiagramPropertiesScrollArea->setWidget(mScrollAreaWidgetContents);

        verticalLayout_28->addWidget(mDiagramPropertiesScrollArea);


        verticalLayout_2->addWidget(mDisplayDiagramsGroupBox);

        prop_tabWidget->addTab(diagram_tab, QString());
        field_tab = new QWidget();
        field_tab->setObjectName(QString::fromUtf8("field_tab"));
        prop_tabWidget->addTab(field_tab, QString());
        metaData_tab = new QWidget();
        metaData_tab->setObjectName(QString::fromUtf8("metaData_tab"));
        prop_tabWidget->addTab(metaData_tab, QString());

        verticalLayout->addWidget(prop_tabWidget);

        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(qgis_dev_layerPropDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(qgis_dev_layerPropDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(qgis_dev_layerPropDialog);
        QObject::connect(okButton, SIGNAL(clicked()), qgis_dev_layerPropDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), qgis_dev_layerPropDialog, SLOT(reject()));

        prop_tabWidget->setCurrentIndex(2);
        mDiagramPropertiesTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qgis_dev_layerPropDialog);
    } // setupUi

    void retranslateUi(QDialog *qgis_dev_layerPropDialog)
    {
        qgis_dev_layerPropDialog->setWindowTitle(QApplication::translate("qgis_dev_layerPropDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabText(prop_tabWidget->indexOf(tab), QApplication::translate("qgis_dev_layerPropDialog", "Generic", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabText(prop_tabWidget->indexOf(style_tab), QApplication::translate("qgis_dev_layerPropDialog", "Style", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabToolTip(prop_tabWidget->indexOf(style_tab), QApplication::translate("qgis_dev_layerPropDialog", "config display style", 0, QApplication::UnicodeUTF8));
        m_label_checkBox->setText(QApplication::translate("qgis_dev_layerPropDialog", "display label", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabText(prop_tabWidget->indexOf(label_tab), QApplication::translate("qgis_dev_layerPropDialog", "Label", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabToolTip(prop_tabWidget->indexOf(label_tab), QApplication::translate("qgis_dev_layerPropDialog", "config display label of current vector layer.", 0, QApplication::UnicodeUTF8));
        mDisplayDiagramsGroupBox->setTitle(QApplication::translate("qgis_dev_layerPropDialog", "Display diagrams", 0, QApplication::UnicodeUTF8));
        mTypeLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Diagram type", 0, QApplication::UnicodeUTF8));
        diagramType_comboBox->setItemText(0, QApplication::translate("qgis_dev_layerPropDialog", "Pie", 0, QApplication::UnicodeUTF8));
        diagramType_comboBox->setItemText(1, QApplication::translate("qgis_dev_layerPropDialog", "Hist", 0, QApplication::UnicodeUTF8));
        diagramType_comboBox->setItemText(2, QApplication::translate("qgis_dev_layerPropDialog", "Text", 0, QApplication::UnicodeUTF8));

        mPriorityLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Priority:", 0, QApplication::UnicodeUTF8));
        mPriorityLowLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Low", 0, QApplication::UnicodeUTF8));
        mPriorityHighLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "High", 0, QApplication::UnicodeUTF8));
        mBackgroundColorLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Background color", 0, QApplication::UnicodeUTF8));
        mBarWidthLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Bar width", 0, QApplication::UnicodeUTF8));
        mPenWidthLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Line width", 0, QApplication::UnicodeUTF8));
        mPenColorLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Line color", 0, QApplication::UnicodeUTF8));
        mAngleOffsetLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Start Angle", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        mTransparencyLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Transparency 0%", 0, QApplication::UnicodeUTF8));
        mDiagramPenColorButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mVisibilityGroupBox->setToolTip(QApplication::translate("qgis_dev_layerPropDialog", "Only show diagrams with a size inside the specified range.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mVisibilityGroupBox->setWhatsThis(QApplication::translate("qgis_dev_layerPropDialog", "Hide diagrams with a size outside the specified range.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        mVisibilityGroupBox->setTitle(QApplication::translate("qgis_dev_layerPropDialog", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
        mMinimumDiagramScaleLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Minimum", 0, QApplication::UnicodeUTF8));
        mMaximumDiagramScaleLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Maximum", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabWidgetPage1), QApplication::translate("qgis_dev_layerPropDialog", "Appearance", 0, QApplication::UnicodeUTF8));
        mFixedSizeCheckBox->setText(QApplication::translate("qgis_dev_layerPropDialog", "Fixed size", 0, QApplication::UnicodeUTF8));
        mDiagramUnitsLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Size units", 0, QApplication::UnicodeUTF8));
        mLinearlyScalingLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Scale linearly between 0 and the following attribute value / diagram size:", 0, QApplication::UnicodeUTF8));
        mSizeAttributeLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Attribute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSizeAttributeExpression->setToolTip(QApplication::translate("qgis_dev_layerPropDialog", "Edit expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFindMaximumValueButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Find maximum value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mValueLineEdit->setToolTip(QApplication::translate("qgis_dev_layerPropDialog", "The attribute value you enter here will correspond to the size entered in the field \"Size\" and the chosen \"Size unit\".\n"
"Leave empty to automatically apply the maximum value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSizeLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Size", 0, QApplication::UnicodeUTF8));
        mScaleDependencyLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Scale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mIncreaseSmallDiagramsGroupBox->setToolTip(QApplication::translate("qgis_dev_layerPropDialog", "Will scale diagrams with a size smaller than the minimum size to the minimum size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mIncreaseSmallDiagramsGroupBox->setTitle(QApplication::translate("qgis_dev_layerPropDialog", "Increase size of small diagrams", 0, QApplication::UnicodeUTF8));
        mIncreaseMinimumSizeLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Minimum size", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabWidgetPage2), QApplication::translate("qgis_dev_layerPropDialog", "Size", 0, QApplication::UnicodeUTF8));
        mPlacementLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Placement", 0, QApplication::UnicodeUTF8));
        mLineOptionsLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Line Options", 0, QApplication::UnicodeUTF8));
        mDiagramDistanceLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Distance", 0, QApplication::UnicodeUTF8));
        mDataDefinedPositionGroupBox->setTitle(QApplication::translate("qgis_dev_layerPropDialog", "Data defined position", 0, QApplication::UnicodeUTF8));
        mXPosColLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "x", 0, QApplication::UnicodeUTF8));
        mYPosColLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "y", 0, QApplication::UnicodeUTF8));
        mEngineSettingsButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Automated placement settings", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabWidgetPage3), QApplication::translate("qgis_dev_layerPropDialog", "Position", 0, QApplication::UnicodeUTF8));
        mLabelPlacementLabel->setText(QApplication::translate("qgis_dev_layerPropDialog", "Label placement", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("qgis_dev_layerPropDialog", "Bar Orientation", 0, QApplication::UnicodeUTF8));
        mOrientationUpButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Up", 0, QApplication::UnicodeUTF8));
        mOrientationDownButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Down", 0, QApplication::UnicodeUTF8));
        mOrientationRightButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Right", 0, QApplication::UnicodeUTF8));
        mOrientationLeftButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Left", 0, QApplication::UnicodeUTF8));
        mDiagramPropertiesTabWidget->setTabText(mDiagramPropertiesTabWidget->indexOf(mDiagramPropertiesTabOptions), QApplication::translate("qgis_dev_layerPropDialog", "Options", 0, QApplication::UnicodeUTF8));
        mAttributesGroupBox->setTitle(QApplication::translate("qgis_dev_layerPropDialog", "Attributes", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("qgis_dev_layerPropDialog", "Available attributes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttributeExpression->setToolTip(QApplication::translate("qgis_dev_layerPropDialog", "Add expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddCategoryPushButton->setText(QString());
        mRemoveCategoryPushButton->setText(QString());
        Assigened->setText(QApplication::translate("qgis_dev_layerPropDialog", "Assigned attributes", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mDiagramAttributesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("qgis_dev_layerPropDialog", "Color", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("qgis_dev_layerPropDialog", "Attribute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDiagramAttributesTreeWidget->setToolTip(QApplication::translate("qgis_dev_layerPropDialog", "Drag and drop to reorder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        prop_tabWidget->setTabText(prop_tabWidget->indexOf(diagram_tab), QApplication::translate("qgis_dev_layerPropDialog", "Diagram", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabText(prop_tabWidget->indexOf(field_tab), QApplication::translate("qgis_dev_layerPropDialog", "Field", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabText(prop_tabWidget->indexOf(metaData_tab), QApplication::translate("qgis_dev_layerPropDialog", "MetaData", 0, QApplication::UnicodeUTF8));
        prop_tabWidget->setTabToolTip(prop_tabWidget->indexOf(metaData_tab), QApplication::translate("qgis_dev_layerPropDialog", "display meta data of current layer data", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("qgis_dev_layerPropDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qgis_dev_layerPropDialog: public Ui_qgis_dev_layerPropDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGIS_DEV_LAYERPROPDIALOG_H
