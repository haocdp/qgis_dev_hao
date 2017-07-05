/********************************************************************************
** Form generated from reading UI file 'qgsadvanceddigitizingdockwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H
#define UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAdvancedDigitizingDockWidgetBase
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QVBoxLayout *mLayout;
    QLabel *mErrorLabel;
    QWidget *mCadWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *mButtonsLayout;
    QToolButton *mEnabledButton;
    QWidget *mCadButtons;
    QGridLayout *gridLayout_2;
    QToolButton *mParallelButton;
    QToolButton *mPerpendicularButton;
    QToolButton *mConstructionModeButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *mSettingsButton;
    QWidget *mInputWidgets;
    QGridLayout *mInputLayout;
    QLineEdit *mXLineEdit;
    QLineEdit *mDistanceLineEdit;
    QToolButton *mLockDistanceButton;
    QToolButton *mLockAngleButton;
    QToolButton *mLockYButton;
    QLabel *label;
    QToolButton *mRelativeYButton;
    QLabel *label_2;
    QLineEdit *mAngleLineEdit;
    QLabel *label_3;
    QLineEdit *mYLineEdit;
    QToolButton *mRelativeXButton;
    QLabel *label_4;
    QToolButton *mLockXButton;
    QToolButton *mRelativeAngleButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *QgsAdvancedDigitizingDockWidgetBase)
    {
        if (QgsAdvancedDigitizingDockWidgetBase->objectName().isEmpty())
            QgsAdvancedDigitizingDockWidgetBase->setObjectName(QString::fromUtf8("QgsAdvancedDigitizingDockWidgetBase"));
        QgsAdvancedDigitizingDockWidgetBase->resize(303, 220);
        QgsAdvancedDigitizingDockWidgetBase->setMaximumSize(QSize(524287, 220));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mLayout = new QVBoxLayout();
        mLayout->setObjectName(QString::fromUtf8("mLayout"));
        mErrorLabel = new QLabel(dockWidgetContents);
        mErrorLabel->setObjectName(QString::fromUtf8("mErrorLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mErrorLabel->sizePolicy().hasHeightForWidth());
        mErrorLabel->setSizePolicy(sizePolicy);
        mErrorLabel->setAlignment(Qt::AlignCenter);
        mErrorLabel->setWordWrap(true);

        mLayout->addWidget(mErrorLabel);

        mCadWidget = new QWidget(dockWidgetContents);
        mCadWidget->setObjectName(QString::fromUtf8("mCadWidget"));
        verticalLayout = new QVBoxLayout(mCadWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mButtonsLayout = new QHBoxLayout();
        mButtonsLayout->setObjectName(QString::fromUtf8("mButtonsLayout"));
        mEnabledButton = new QToolButton(mCadWidget);
        mEnabledButton->setObjectName(QString::fromUtf8("mEnabledButton"));
        mEnabledButton->setIconSize(QSize(24, 24));
        mEnabledButton->setCheckable(true);

        mButtonsLayout->addWidget(mEnabledButton);

        mCadButtons = new QWidget(mCadWidget);
        mCadButtons->setObjectName(QString::fromUtf8("mCadButtons"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCadButtons->sizePolicy().hasHeightForWidth());
        mCadButtons->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(mCadButtons);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mParallelButton = new QToolButton(mCadButtons);
        mParallelButton->setObjectName(QString::fromUtf8("mParallelButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/cadtools/parallel.png"), QSize(), QIcon::Normal, QIcon::Off);
        mParallelButton->setIcon(icon);
        mParallelButton->setIconSize(QSize(24, 24));
        mParallelButton->setCheckable(true);

        gridLayout_2->addWidget(mParallelButton, 0, 2, 1, 1);

        mPerpendicularButton = new QToolButton(mCadButtons);
        mPerpendicularButton->setObjectName(QString::fromUtf8("mPerpendicularButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/cadtools/perpendicular.png"), QSize(), QIcon::Normal, QIcon::Off);
        mPerpendicularButton->setIcon(icon1);
        mPerpendicularButton->setIconSize(QSize(24, 24));
        mPerpendicularButton->setCheckable(true);

        gridLayout_2->addWidget(mPerpendicularButton, 0, 1, 1, 1);

        mConstructionModeButton = new QToolButton(mCadButtons);
        mConstructionModeButton->setObjectName(QString::fromUtf8("mConstructionModeButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/cadtools/construction.png"), QSize(), QIcon::Normal, QIcon::Off);
        mConstructionModeButton->setIcon(icon2);
        mConstructionModeButton->setIconSize(QSize(24, 24));
        mConstructionModeButton->setCheckable(true);

        gridLayout_2->addWidget(mConstructionModeButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        mSettingsButton = new QToolButton(mCadButtons);
        mSettingsButton->setObjectName(QString::fromUtf8("mSettingsButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/default/mActionTransformSettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        mSettingsButton->setIcon(icon3);
        mSettingsButton->setPopupMode(QToolButton::InstantPopup);

        gridLayout_2->addWidget(mSettingsButton, 0, 4, 1, 1);


        mButtonsLayout->addWidget(mCadButtons);


        verticalLayout->addLayout(mButtonsLayout);

        mInputWidgets = new QWidget(mCadWidget);
        mInputWidgets->setObjectName(QString::fromUtf8("mInputWidgets"));
        mInputLayout = new QGridLayout(mInputWidgets);
        mInputLayout->setSpacing(3);
        mInputLayout->setContentsMargins(0, 0, 0, 0);
        mInputLayout->setObjectName(QString::fromUtf8("mInputLayout"));
        mXLineEdit = new QLineEdit(mInputWidgets);
        mXLineEdit->setObjectName(QString::fromUtf8("mXLineEdit"));

        mInputLayout->addWidget(mXLineEdit, 2, 2, 1, 1);

        mDistanceLineEdit = new QLineEdit(mInputWidgets);
        mDistanceLineEdit->setObjectName(QString::fromUtf8("mDistanceLineEdit"));

        mInputLayout->addWidget(mDistanceLineEdit, 0, 2, 1, 1);

        mLockDistanceButton = new QToolButton(mInputWidgets);
        mLockDistanceButton->setObjectName(QString::fromUtf8("mLockDistanceButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/cadtools/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        mLockDistanceButton->setIcon(icon4);
        mLockDistanceButton->setCheckable(true);

        mInputLayout->addWidget(mLockDistanceButton, 0, 3, 1, 1);

        mLockAngleButton = new QToolButton(mInputWidgets);
        mLockAngleButton->setObjectName(QString::fromUtf8("mLockAngleButton"));
        mLockAngleButton->setIcon(icon4);
        mLockAngleButton->setCheckable(true);

        mInputLayout->addWidget(mLockAngleButton, 1, 3, 1, 1);

        mLockYButton = new QToolButton(mInputWidgets);
        mLockYButton->setObjectName(QString::fromUtf8("mLockYButton"));
        mLockYButton->setIcon(icon4);
        mLockYButton->setCheckable(true);

        mInputLayout->addWidget(mLockYButton, 3, 3, 1, 1);

        label = new QLabel(mInputWidgets);
        label->setObjectName(QString::fromUtf8("label"));

        mInputLayout->addWidget(label, 0, 1, 1, 1);

        mRelativeYButton = new QToolButton(mInputWidgets);
        mRelativeYButton->setObjectName(QString::fromUtf8("mRelativeYButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/cadtools/delta.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRelativeYButton->setIcon(icon5);
        mRelativeYButton->setCheckable(true);

        mInputLayout->addWidget(mRelativeYButton, 3, 0, 1, 1);

        label_2 = new QLabel(mInputWidgets);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        mInputLayout->addWidget(label_2, 1, 1, 1, 1);

        mAngleLineEdit = new QLineEdit(mInputWidgets);
        mAngleLineEdit->setObjectName(QString::fromUtf8("mAngleLineEdit"));

        mInputLayout->addWidget(mAngleLineEdit, 1, 2, 1, 1);

        label_3 = new QLabel(mInputWidgets);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        mInputLayout->addWidget(label_3, 2, 1, 1, 1);

        mYLineEdit = new QLineEdit(mInputWidgets);
        mYLineEdit->setObjectName(QString::fromUtf8("mYLineEdit"));

        mInputLayout->addWidget(mYLineEdit, 3, 2, 1, 1);

        mRelativeXButton = new QToolButton(mInputWidgets);
        mRelativeXButton->setObjectName(QString::fromUtf8("mRelativeXButton"));
        mRelativeXButton->setIcon(icon5);
        mRelativeXButton->setCheckable(true);

        mInputLayout->addWidget(mRelativeXButton, 2, 0, 1, 1);

        label_4 = new QLabel(mInputWidgets);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        mInputLayout->addWidget(label_4, 3, 1, 1, 1);

        mLockXButton = new QToolButton(mInputWidgets);
        mLockXButton->setObjectName(QString::fromUtf8("mLockXButton"));
        mLockXButton->setIcon(icon4);
        mLockXButton->setCheckable(true);

        mInputLayout->addWidget(mLockXButton, 2, 3, 1, 1);

        mRelativeAngleButton = new QToolButton(mInputWidgets);
        mRelativeAngleButton->setObjectName(QString::fromUtf8("mRelativeAngleButton"));
        mRelativeAngleButton->setIcon(icon5);
        mRelativeAngleButton->setCheckable(true);
        mRelativeAngleButton->setChecked(true);

        mInputLayout->addWidget(mRelativeAngleButton, 1, 0, 1, 1);


        verticalLayout->addWidget(mInputWidgets);


        mLayout->addWidget(mCadWidget);


        gridLayout->addLayout(mLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        QgsAdvancedDigitizingDockWidgetBase->setWidget(dockWidgetContents);
        QWidget::setTabOrder(mEnabledButton, mConstructionModeButton);
        QWidget::setTabOrder(mConstructionModeButton, mPerpendicularButton);
        QWidget::setTabOrder(mPerpendicularButton, mParallelButton);
        QWidget::setTabOrder(mParallelButton, mSettingsButton);
        QWidget::setTabOrder(mSettingsButton, mDistanceLineEdit);
        QWidget::setTabOrder(mDistanceLineEdit, mLockDistanceButton);
        QWidget::setTabOrder(mLockDistanceButton, mRelativeAngleButton);
        QWidget::setTabOrder(mRelativeAngleButton, mAngleLineEdit);
        QWidget::setTabOrder(mAngleLineEdit, mLockAngleButton);
        QWidget::setTabOrder(mLockAngleButton, mRelativeXButton);
        QWidget::setTabOrder(mRelativeXButton, mXLineEdit);
        QWidget::setTabOrder(mXLineEdit, mLockXButton);
        QWidget::setTabOrder(mLockXButton, mRelativeYButton);
        QWidget::setTabOrder(mRelativeYButton, mYLineEdit);
        QWidget::setTabOrder(mYLineEdit, mLockYButton);

        retranslateUi(QgsAdvancedDigitizingDockWidgetBase);

        QMetaObject::connectSlotsByName(QgsAdvancedDigitizingDockWidgetBase);
    } // setupUi

    void retranslateUi(QDockWidget *QgsAdvancedDigitizingDockWidgetBase)
    {
        QgsAdvancedDigitizingDockWidgetBase->setWindowTitle(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Advanced Digitizing", 0, QApplication::UnicodeUTF8));
        mErrorLabel->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Error", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mEnabledButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mEnabledButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mParallelButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Parallel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mParallelButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPerpendicularButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Perpendicular", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mPerpendicularButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mConstructionModeButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Construction mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mConstructionModeButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mSettingsButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mXLineEdit->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "X coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mDistanceLineEdit->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Distance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mLockDistanceButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Lock distance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLockDistanceButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLockAngleButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Lock angle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLockAngleButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLockYButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Lock y coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLockYButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "d", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRelativeYButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Toggles relative y to previous node", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRelativeYButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "a", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAngleLineEdit->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Angle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "x", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mYLineEdit->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Y coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mRelativeXButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Toggles relative x to previous node", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRelativeXButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLockXButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Lock x coordinate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLockXButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRelativeAngleButton->setToolTip(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "Toggles relative angle to previous segment", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRelativeAngleButton->setText(QApplication::translate("QgsAdvancedDigitizingDockWidgetBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAdvancedDigitizingDockWidgetBase: public Ui_QgsAdvancedDigitizingDockWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADVANCEDDIGITIZINGDOCKWIDGETBASE_H
