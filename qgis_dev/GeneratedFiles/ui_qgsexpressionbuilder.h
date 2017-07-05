/********************************************************************************
** Form generated from reading UI file 'qgsexpressionbuilder.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXPRESSIONBUILDER_H
#define UI_QGSEXPRESSIONBUILDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscodeeditorpython.h"
#include "qgscodeeditorsql.h"
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsExpressionBuilderWidgetBase
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *lblPreview;
    QFrame *mOperatorsGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnEqualPushButton;
    QPushButton *btnPlusPushButton;
    QPushButton *btnMinusPushButton;
    QPushButton *btnDividePushButton;
    QPushButton *btnMultiplyPushButton;
    QPushButton *btnExpButton;
    QPushButton *btnConcatButton;
    QPushButton *btnOpenBracketPushButton;
    QPushButton *btnCloseBracketPushButton;
    QgsCodeEditorSQL *txtExpressionString;
    QGroupBox *moperationListGroup;
    QGridLayout *gridLayout_5;
    QSplitter *functionsplit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QgsFilterLineEdit *txtSearchEdit;
    QTreeView *expressionTree;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *txtHelpText;
    QVBoxLayout *verticalLayout_2;
    QFrame *mValueGroupBox;
    QGridLayout *gridLayout_7;
    QListWidget *mValueListWidget;
    QLabel *label_4;
    QWidget *mLoadGroupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *lblLoad;
    QPushButton *btnLoadAll;
    QPushButton *btnLoadSample;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QgsCodeEditorPython *txtPython;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *btnRun;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btnNewFile;
    QComboBox *cmbFileNames;
    QToolButton *btnSaveFile;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        if (QgsExpressionBuilderWidgetBase->objectName().isEmpty())
            QgsExpressionBuilderWidgetBase->setObjectName(QString::fromUtf8("QgsExpressionBuilderWidgetBase"));
        QgsExpressionBuilderWidgetBase->resize(996, 468);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsExpressionBuilderWidgetBase->sizePolicy().hasHeightForWidth());
        QgsExpressionBuilderWidgetBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsExpressionBuilderWidgetBase);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(QgsExpressionBuilderWidgetBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(tab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(4);
        layoutWidget_1 = new QWidget(splitter);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        verticalLayout = new QVBoxLayout(layoutWidget_1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setBaseSize(QSize(0, 0));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(label_2);

        lblPreview = new QLabel(groupBox);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy3);
        QFont font;
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(50);
        lblPreview->setFont(font);
        lblPreview->setFrameShape(QFrame::NoFrame);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(0);
        lblPreview->setMidLineWidth(0);
        lblPreview->setScaledContents(false);
        lblPreview->setWordWrap(false);
        lblPreview->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(lblPreview);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        mOperatorsGroupBox = new QFrame(groupBox);
        mOperatorsGroupBox->setObjectName(QString::fromUtf8("mOperatorsGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mOperatorsGroupBox->sizePolicy().hasHeightForWidth());
        mOperatorsGroupBox->setSizePolicy(sizePolicy4);
        mOperatorsGroupBox->setMinimumSize(QSize(27, 0));
        mOperatorsGroupBox->setMaximumSize(QSize(300, 16777215));
        mOperatorsGroupBox->setSizeIncrement(QSize(20, 0));
        mOperatorsGroupBox->setBaseSize(QSize(7, 0));
        mOperatorsGroupBox->setLayoutDirection(Qt::LeftToRight);
        mOperatorsGroupBox->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(mOperatorsGroupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        btnEqualPushButton = new QPushButton(mOperatorsGroupBox);
        btnEqualPushButton->setObjectName(QString::fromUtf8("btnEqualPushButton"));

        horizontalLayout_2->addWidget(btnEqualPushButton);

        btnPlusPushButton = new QPushButton(mOperatorsGroupBox);
        btnPlusPushButton->setObjectName(QString::fromUtf8("btnPlusPushButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnPlusPushButton->sizePolicy().hasHeightForWidth());
        btnPlusPushButton->setSizePolicy(sizePolicy5);

        horizontalLayout_2->addWidget(btnPlusPushButton);

        btnMinusPushButton = new QPushButton(mOperatorsGroupBox);
        btnMinusPushButton->setObjectName(QString::fromUtf8("btnMinusPushButton"));

        horizontalLayout_2->addWidget(btnMinusPushButton);

        btnDividePushButton = new QPushButton(mOperatorsGroupBox);
        btnDividePushButton->setObjectName(QString::fromUtf8("btnDividePushButton"));

        horizontalLayout_2->addWidget(btnDividePushButton);

        btnMultiplyPushButton = new QPushButton(mOperatorsGroupBox);
        btnMultiplyPushButton->setObjectName(QString::fromUtf8("btnMultiplyPushButton"));

        horizontalLayout_2->addWidget(btnMultiplyPushButton);

        btnExpButton = new QPushButton(mOperatorsGroupBox);
        btnExpButton->setObjectName(QString::fromUtf8("btnExpButton"));

        horizontalLayout_2->addWidget(btnExpButton);

        btnConcatButton = new QPushButton(mOperatorsGroupBox);
        btnConcatButton->setObjectName(QString::fromUtf8("btnConcatButton"));

        horizontalLayout_2->addWidget(btnConcatButton);

        btnOpenBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnOpenBracketPushButton->setObjectName(QString::fromUtf8("btnOpenBracketPushButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(btnOpenBracketPushButton->sizePolicy().hasHeightForWidth());
        btnOpenBracketPushButton->setSizePolicy(sizePolicy6);
        btnOpenBracketPushButton->setMinimumSize(QSize(0, 10));

        horizontalLayout_2->addWidget(btnOpenBracketPushButton);

        btnCloseBracketPushButton = new QPushButton(mOperatorsGroupBox);
        btnCloseBracketPushButton->setObjectName(QString::fromUtf8("btnCloseBracketPushButton"));

        horizontalLayout_2->addWidget(btnCloseBracketPushButton);


        gridLayout->addWidget(mOperatorsGroupBox, 0, 0, 1, 1);

        txtExpressionString = new QgsCodeEditorSQL(groupBox);
        txtExpressionString->setObjectName(QString::fromUtf8("txtExpressionString"));

        gridLayout->addWidget(txtExpressionString, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        splitter->addWidget(layoutWidget_1);
        moperationListGroup = new QGroupBox(splitter);
        moperationListGroup->setObjectName(QString::fromUtf8("moperationListGroup"));
        moperationListGroup->setFlat(true);
        gridLayout_5 = new QGridLayout(moperationListGroup);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        functionsplit = new QSplitter(moperationListGroup);
        functionsplit->setObjectName(QString::fromUtf8("functionsplit"));
        functionsplit->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(functionsplit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        txtSearchEdit = new QgsFilterLineEdit(layoutWidget);
        txtSearchEdit->setObjectName(QString::fromUtf8("txtSearchEdit"));
        txtSearchEdit->setEnabled(true);

        verticalLayout_4->addWidget(txtSearchEdit);

        expressionTree = new QTreeView(layoutWidget);
        expressionTree->setObjectName(QString::fromUtf8("expressionTree"));
        expressionTree->setFrameShape(QFrame::StyledPanel);
        expressionTree->setFrameShadow(QFrame::Sunken);
        expressionTree->setEditTriggers(QAbstractItemView::NoEditTriggers);
        expressionTree->setUniformRowHeights(false);
        expressionTree->setSortingEnabled(false);
        expressionTree->setAnimated(true);
        expressionTree->header()->setVisible(false);

        verticalLayout_4->addWidget(expressionTree);

        functionsplit->addWidget(layoutWidget);
        layoutWidget2 = new QWidget(functionsplit);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        txtHelpText = new QTextEdit(layoutWidget2);
        txtHelpText->setObjectName(QString::fromUtf8("txtHelpText"));
        txtHelpText->setReadOnly(true);

        verticalLayout_3->addWidget(txtHelpText);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(-1, 0, 0, 0);
        mValueGroupBox = new QFrame(layoutWidget2);
        mValueGroupBox->setObjectName(QString::fromUtf8("mValueGroupBox"));
        gridLayout_7 = new QGridLayout(mValueGroupBox);
        gridLayout_7->setSpacing(0);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mValueListWidget = new QListWidget(mValueGroupBox);
        mValueListWidget->setObjectName(QString::fromUtf8("mValueListWidget"));
        sizePolicy1.setHeightForWidth(mValueListWidget->sizePolicy().hasHeightForWidth());
        mValueListWidget->setSizePolicy(sizePolicy1);
        mValueListWidget->setMaximumSize(QSize(16777215, 16777215));
        mValueListWidget->setAutoFillBackground(false);
        mValueListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mValueListWidget->setProperty("showDropIndicator", QVariant(false));
        mValueListWidget->setAlternatingRowColors(true);
        mValueListWidget->setViewMode(QListView::ListMode);

        gridLayout_7->addWidget(mValueListWidget, 1, 0, 1, 2);

        label_4 = new QLabel(mValueGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout_2->addWidget(mValueGroupBox);

        mLoadGroupBox = new QWidget(layoutWidget2);
        mLoadGroupBox->setObjectName(QString::fromUtf8("mLoadGroupBox"));
        horizontalLayout = new QHBoxLayout(mLoadGroupBox);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblLoad = new QLabel(mLoadGroupBox);
        lblLoad->setObjectName(QString::fromUtf8("lblLoad"));

        horizontalLayout->addWidget(lblLoad);

        btnLoadAll = new QPushButton(mLoadGroupBox);
        btnLoadAll->setObjectName(QString::fromUtf8("btnLoadAll"));

        horizontalLayout->addWidget(btnLoadAll);

        btnLoadSample = new QPushButton(mLoadGroupBox);
        btnLoadSample->setObjectName(QString::fromUtf8("btnLoadSample"));

        horizontalLayout->addWidget(btnLoadSample);


        verticalLayout_2->addWidget(mLoadGroupBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        functionsplit->addWidget(layoutWidget2);

        gridLayout_5->addWidget(functionsplit, 0, 0, 1, 1);

        splitter->addWidget(moperationListGroup);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        txtPython = new QgsCodeEditorPython(tab_2);
        txtPython->setObjectName(QString::fromUtf8("txtPython"));

        gridLayout_4->addWidget(txtPython, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, 3, -1, -1);
        btnRun = new QToolButton(tab_2);
        btnRun->setObjectName(QString::fromUtf8("btnRun"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/console/iconRunScriptConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRun->setIcon(icon);
        btnRun->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btnRun->setAutoRaise(true);

        horizontalLayout_5->addWidget(btnRun);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        btnNewFile = new QToolButton(tab_2);
        btnNewFile->setObjectName(QString::fromUtf8("btnNewFile"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/console/iconTabEditorConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNewFile->setIcon(icon1);
        btnNewFile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btnNewFile->setAutoRaise(true);

        horizontalLayout_5->addWidget(btnNewFile);

        cmbFileNames = new QComboBox(tab_2);
        cmbFileNames->setObjectName(QString::fromUtf8("cmbFileNames"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(cmbFileNames->sizePolicy().hasHeightForWidth());
        cmbFileNames->setSizePolicy(sizePolicy7);
        cmbFileNames->setEditable(true);

        horizontalLayout_5->addWidget(cmbFileNames);

        btnSaveFile = new QToolButton(tab_2);
        btnSaveFile->setObjectName(QString::fromUtf8("btnSaveFile"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/console/iconSaveConsole.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveFile->setIcon(icon2);
        btnSaveFile->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btnSaveFile->setAutoRaise(true);

        horizontalLayout_5->addWidget(btnSaveFile);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(QgsExpressionBuilderWidgetBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsExpressionBuilderWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsExpressionBuilderWidgetBase)
    {
        QgsExpressionBuilderWidgetBase->setWindowTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Expression", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblPreview->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Output preview is generated <br> using the first feature from the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnEqualPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Equal operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnEqualPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "=", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnPlusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Addition operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnPlusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnMinusPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Subtraction operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMinusPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnDividePushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Division operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnDividePushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "/", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnMultiplyPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Multiplication operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMultiplyPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnExpButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Power operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnExpButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "^", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnConcatButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "String Concatenation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnConcatButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "||", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnOpenBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Open Bracket ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnOpenBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "(", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnCloseBracketPushButton->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Close Bracket ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnCloseBracketPushButton->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", ")", 0, QApplication::UnicodeUTF8));
        moperationListGroup->setTitle(QApplication::translate("QgsExpressionBuilderWidgetBase", "Functions", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Values", 0, QApplication::UnicodeUTF8));
        lblLoad->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Load values", 0, QApplication::UnicodeUTF8));
        btnLoadAll->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "all unique", 0, QApplication::UnicodeUTF8));
        btnLoadSample->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "10 samples", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsExpressionBuilderWidgetBase", "Expression", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnRun->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Run the current editor text in QGIS (also saves current script). \n"
"\n"
"Use this when testing your functions.\n"
"\n"
"Saved scripts are auto loaded on QGIS startup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRun->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Run Script", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnNewFile->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Create a new function file based on the template file.\n"
"\n"
"Change the name of the script and save to allow QGIS to auto load on startup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnNewFile->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "New file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cmbFileNames->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Name of the file to save. \n"
"\n"
"Existing files are listed here and loaded when selected.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnSaveFile->setToolTip(QApplication::translate("QgsExpressionBuilderWidgetBase", "Save the current script into the users function file folder.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSaveFile->setText(QApplication::translate("QgsExpressionBuilderWidgetBase", "Save file", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsExpressionBuilderWidgetBase", "Function Editor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsExpressionBuilderWidgetBase: public Ui_QgsExpressionBuilderWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXPRESSIONBUILDER_H
