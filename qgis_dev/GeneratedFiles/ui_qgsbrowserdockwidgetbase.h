/********************************************************************************
** Form generated from reading UI file 'qgsbrowserdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSBROWSERDOCKWIDGETBASE_H
#define UI_QGSBROWSERDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsfilterlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_QgsBrowserDockWidgetBase
{
public:
    QWidget *mContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mLayoutHeader;
    QToolButton *mBtnRefresh;
    QToolButton *mBtnAddLayers;
    QToolButton *mBtnFilterShow;
    QToolButton *mBtnCollapse;
    QSpacerItem *horizontalSpacer;
    QWidget *mWidgetFilter;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *mBtnFilterOptions;
    QgsFilterLineEdit *mLeFilter;
    QHBoxLayout *mLayoutBrowser;

    void setupUi(QDockWidget *QgsBrowserDockWidgetBase)
    {
        if (QgsBrowserDockWidgetBase->objectName().isEmpty())
            QgsBrowserDockWidgetBase->setObjectName(QString::fromUtf8("QgsBrowserDockWidgetBase"));
        QgsBrowserDockWidgetBase->resize(708, 528);
        mContents = new QWidget();
        mContents->setObjectName(QString::fromUtf8("mContents"));
        verticalLayout = new QVBoxLayout(mContents);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mLayoutHeader = new QHBoxLayout();
        mLayoutHeader->setSpacing(6);
        mLayoutHeader->setObjectName(QString::fromUtf8("mLayoutHeader"));
        mLayoutHeader->setContentsMargins(0, -1, 0, -1);
        mBtnRefresh = new QToolButton(mContents);
        mBtnRefresh->setObjectName(QString::fromUtf8("mBtnRefresh"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionDraw.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnRefresh->setIcon(icon);
        mBtnRefresh->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mBtnRefresh->setAutoRaise(true);

        mLayoutHeader->addWidget(mBtnRefresh);

        mBtnAddLayers = new QToolButton(mContents);
        mBtnAddLayers->setObjectName(QString::fromUtf8("mBtnAddLayers"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnAddLayers->setIcon(icon1);
        mBtnAddLayers->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mBtnAddLayers->setAutoRaise(true);

        mLayoutHeader->addWidget(mBtnAddLayers);

        mBtnFilterShow = new QToolButton(mContents);
        mBtnFilterShow->setObjectName(QString::fromUtf8("mBtnFilterShow"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFilter.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnFilterShow->setIcon(icon2);
        mBtnFilterShow->setCheckable(true);
        mBtnFilterShow->setChecked(false);
        mBtnFilterShow->setAutoRaise(true);

        mLayoutHeader->addWidget(mBtnFilterShow);

        mBtnCollapse = new QToolButton(mContents);
        mBtnCollapse->setObjectName(QString::fromUtf8("mBtnCollapse"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionCollapseTree.png"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnCollapse->setIcon(icon3);
        mBtnCollapse->setAutoRaise(true);

        mLayoutHeader->addWidget(mBtnCollapse);

        horizontalSpacer = new QSpacerItem(0, 1, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        mLayoutHeader->addItem(horizontalSpacer);


        verticalLayout->addLayout(mLayoutHeader);

        mWidgetFilter = new QWidget(mContents);
        mWidgetFilter->setObjectName(QString::fromUtf8("mWidgetFilter"));
        horizontalLayout = new QHBoxLayout(mWidgetFilter);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(mWidgetFilter);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 0, 2, 0);
        mBtnFilterOptions = new QToolButton(frame);
        mBtnFilterOptions->setObjectName(QString::fromUtf8("mBtnFilterOptions"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mBtnFilterOptions->setIcon(icon4);
        mBtnFilterOptions->setPopupMode(QToolButton::InstantPopup);
        mBtnFilterOptions->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mBtnFilterOptions->setAutoRaise(true);

        horizontalLayout_3->addWidget(mBtnFilterOptions);

        mLeFilter = new QgsFilterLineEdit(frame);
        mLeFilter->setObjectName(QString::fromUtf8("mLeFilter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLeFilter->sizePolicy().hasHeightForWidth());
        mLeFilter->setSizePolicy(sizePolicy1);
        mLeFilter->setMinimumSize(QSize(0, 0));
        mLeFilter->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(mLeFilter);


        horizontalLayout->addWidget(frame);


        verticalLayout->addWidget(mWidgetFilter);

        mLayoutBrowser = new QHBoxLayout();
        mLayoutBrowser->setSpacing(5);
        mLayoutBrowser->setObjectName(QString::fromUtf8("mLayoutBrowser"));

        verticalLayout->addLayout(mLayoutBrowser);

        QgsBrowserDockWidgetBase->setWidget(mContents);

        retranslateUi(QgsBrowserDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsBrowserDockWidgetBase);
    } // setupUi

    void retranslateUi(QDockWidget *QgsBrowserDockWidgetBase)
    {
        QgsBrowserDockWidgetBase->setWindowTitle(QApplication::translate("QgsBrowserDockWidgetBase", "Browser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnRefresh->setToolTip(QApplication::translate("QgsBrowserDockWidgetBase", "Refresh", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnRefresh->setText(QApplication::translate("QgsBrowserDockWidgetBase", "Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnAddLayers->setToolTip(QApplication::translate("QgsBrowserDockWidgetBase", "Add Selected Layers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnAddLayers->setText(QString());
#ifndef QT_NO_TOOLTIP
        mBtnFilterShow->setToolTip(QApplication::translate("QgsBrowserDockWidgetBase", "Filter Files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnFilterShow->setText(QApplication::translate("QgsBrowserDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnCollapse->setToolTip(QApplication::translate("QgsBrowserDockWidgetBase", "Collapse All", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnCollapse->setText(QApplication::translate("QgsBrowserDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mBtnFilterOptions->setToolTip(QApplication::translate("QgsBrowserDockWidgetBase", "Options", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mBtnFilterOptions->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsBrowserDockWidgetBase: public Ui_QgsBrowserDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSBROWSERDOCKWIDGETBASE_H
