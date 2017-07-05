/********************************************************************************
** Form generated from reading UI file 'qgsmapunitscaledialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPUNITSCALEDIALOG_H
#define UI_QGSMAPUNITSCALEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include "qgsscalecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapUnitScaleDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *mCheckBoxMaxScale;
    QCheckBox *mCheckBoxMinScale;
    QgsScaleComboBox *mComboBoxMaxScale;
    QDialogButtonBox *mButtonBox;
    QgsScaleComboBox *mComboBoxMinScale;
    QLabel *label;

    void setupUi(QDialog *QgsMapUnitScaleDialog)
    {
        if (QgsMapUnitScaleDialog->objectName().isEmpty())
            QgsMapUnitScaleDialog->setObjectName(QString::fromUtf8("QgsMapUnitScaleDialog"));
        QgsMapUnitScaleDialog->resize(320, 134);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsMapUnitScaleDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMapUnitScaleDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mCheckBoxMaxScale = new QCheckBox(QgsMapUnitScaleDialog);
        mCheckBoxMaxScale->setObjectName(QString::fromUtf8("mCheckBoxMaxScale"));

        gridLayout->addWidget(mCheckBoxMaxScale, 1, 0, 1, 1);

        mCheckBoxMinScale = new QCheckBox(QgsMapUnitScaleDialog);
        mCheckBoxMinScale->setObjectName(QString::fromUtf8("mCheckBoxMinScale"));

        gridLayout->addWidget(mCheckBoxMinScale, 2, 0, 1, 1);

        mComboBoxMaxScale = new QgsScaleComboBox(QgsMapUnitScaleDialog);
        mComboBoxMaxScale->setObjectName(QString::fromUtf8("mComboBoxMaxScale"));

        gridLayout->addWidget(mComboBoxMaxScale, 1, 1, 1, 2);

        mButtonBox = new QDialogButtonBox(QgsMapUnitScaleDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 4, 0, 1, 2);

        mComboBoxMinScale = new QgsScaleComboBox(QgsMapUnitScaleDialog);
        mComboBoxMinScale->setObjectName(QString::fromUtf8("mComboBoxMinScale"));

        gridLayout->addWidget(mComboBoxMinScale, 2, 1, 1, 2);

        label = new QLabel(QgsMapUnitScaleDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        QWidget::setTabOrder(mCheckBoxMaxScale, mComboBoxMaxScale);
        QWidget::setTabOrder(mComboBoxMaxScale, mCheckBoxMinScale);
        QWidget::setTabOrder(mCheckBoxMinScale, mComboBoxMinScale);
        QWidget::setTabOrder(mComboBoxMinScale, mButtonBox);

        retranslateUi(QgsMapUnitScaleDialog);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsMapUnitScaleDialog, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsMapUnitScaleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMapUnitScaleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMapUnitScaleDialog)
    {
        QgsMapUnitScaleDialog->setWindowTitle(QApplication::translate("QgsMapUnitScaleDialog", "Adjust scaling range", 0, QApplication::UnicodeUTF8));
        mCheckBoxMaxScale->setText(QApplication::translate("QgsMapUnitScaleDialog", "Maximum scale:", 0, QApplication::UnicodeUTF8));
        mCheckBoxMinScale->setText(QApplication::translate("QgsMapUnitScaleDialog", "Minimum scale:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsMapUnitScaleDialog", "Scale only within the following map unit scale range:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMapUnitScaleDialog: public Ui_QgsMapUnitScaleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPUNITSCALEDIALOG_H
