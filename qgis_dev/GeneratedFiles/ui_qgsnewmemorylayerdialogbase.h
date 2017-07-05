/********************************************************************************
** Form generated from reading UI file 'qgsnewmemorylayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWMEMORYLAYERDIALOGBASE_H
#define UI_QGSNEWMEMORYLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <qgsprojectionselectionwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QgsNewMemoryLayerDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *mNameLineEdit;
    QGroupBox *buttonGroup1;
    QGridLayout *gridLayout;
    QRadioButton *mPointRadioButton;
    QRadioButton *mLineRadioButton;
    QRadioButton *mPolygonRadioButton;
    QRadioButton *mMultiPointRadioButton;
    QRadioButton *mMultiLineRadioButton;
    QRadioButton *mMultiPolygonRadioButton;
    QgsProjectionSelectionWidget *mCrsSelector;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsNewMemoryLayerDialogBase)
    {
        if (QgsNewMemoryLayerDialogBase->objectName().isEmpty())
            QgsNewMemoryLayerDialogBase->setObjectName(QString::fromUtf8("QgsNewMemoryLayerDialogBase"));
        QgsNewMemoryLayerDialogBase->resize(444, 293);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewMemoryLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsNewMemoryLayerDialogBase->setSizePolicy(sizePolicy);
        QgsNewMemoryLayerDialogBase->setModal(true);
        verticalLayout = new QVBoxLayout(QgsNewMemoryLayerDialogBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(QgsNewMemoryLayerDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        mNameLineEdit = new QLineEdit(QgsNewMemoryLayerDialogBase);
        mNameLineEdit->setObjectName(QString::fromUtf8("mNameLineEdit"));

        horizontalLayout_2->addWidget(mNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonGroup1 = new QGroupBox(QgsNewMemoryLayerDialogBase);
        buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
        gridLayout = new QGridLayout(buttonGroup1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mPointRadioButton = new QRadioButton(buttonGroup1);
        mPointRadioButton->setObjectName(QString::fromUtf8("mPointRadioButton"));

        gridLayout->addWidget(mPointRadioButton, 0, 0, 1, 1);

        mLineRadioButton = new QRadioButton(buttonGroup1);
        mLineRadioButton->setObjectName(QString::fromUtf8("mLineRadioButton"));

        gridLayout->addWidget(mLineRadioButton, 0, 1, 1, 1);

        mPolygonRadioButton = new QRadioButton(buttonGroup1);
        mPolygonRadioButton->setObjectName(QString::fromUtf8("mPolygonRadioButton"));

        gridLayout->addWidget(mPolygonRadioButton, 0, 2, 1, 1);

        mMultiPointRadioButton = new QRadioButton(buttonGroup1);
        mMultiPointRadioButton->setObjectName(QString::fromUtf8("mMultiPointRadioButton"));

        gridLayout->addWidget(mMultiPointRadioButton, 1, 0, 1, 1);

        mMultiLineRadioButton = new QRadioButton(buttonGroup1);
        mMultiLineRadioButton->setObjectName(QString::fromUtf8("mMultiLineRadioButton"));

        gridLayout->addWidget(mMultiLineRadioButton, 1, 1, 1, 1);

        mMultiPolygonRadioButton = new QRadioButton(buttonGroup1);
        mMultiPolygonRadioButton->setObjectName(QString::fromUtf8("mMultiPolygonRadioButton"));

        gridLayout->addWidget(mMultiPolygonRadioButton, 1, 2, 1, 1);


        verticalLayout->addWidget(buttonGroup1);

        mCrsSelector = new QgsProjectionSelectionWidget(QgsNewMemoryLayerDialogBase);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout->addWidget(mCrsSelector);

        label_2 = new QLabel(QgsNewMemoryLayerDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mButtonBox = new QDialogButtonBox(QgsNewMemoryLayerDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mButtonBox);

        QWidget::setTabOrder(mNameLineEdit, mPointRadioButton);
        QWidget::setTabOrder(mPointRadioButton, mLineRadioButton);
        QWidget::setTabOrder(mLineRadioButton, mPolygonRadioButton);
        QWidget::setTabOrder(mPolygonRadioButton, mMultiPointRadioButton);
        QWidget::setTabOrder(mMultiPointRadioButton, mMultiLineRadioButton);
        QWidget::setTabOrder(mMultiLineRadioButton, mMultiPolygonRadioButton);
        QWidget::setTabOrder(mMultiPolygonRadioButton, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, mButtonBox);

        retranslateUi(QgsNewMemoryLayerDialogBase);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsNewMemoryLayerDialogBase, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsNewMemoryLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewMemoryLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewMemoryLayerDialogBase)
    {
        QgsNewMemoryLayerDialogBase->setWindowTitle(QApplication::translate("QgsNewMemoryLayerDialogBase", "New Temporary Scratch Layer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Layer name", 0, QApplication::UnicodeUTF8));
        buttonGroup1->setTitle(QApplication::translate("QgsNewMemoryLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        mPointRadioButton->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Point", 0, QApplication::UnicodeUTF8));
        mLineRadioButton->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Line", 0, QApplication::UnicodeUTF8));
        mPolygonRadioButton->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Polygon", 0, QApplication::UnicodeUTF8));
        mMultiPointRadioButton->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Multipoint", 0, QApplication::UnicodeUTF8));
        mMultiLineRadioButton->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Multiline", 0, QApplication::UnicodeUTF8));
        mMultiPolygonRadioButton->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "Multipolygon", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsNewMemoryLayerDialogBase", "<i><b>Warning:</b> Temporary scratch layers are not saved and will be discarded when QGIS is closed.</i>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsNewMemoryLayerDialogBase: public Ui_QgsNewMemoryLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWMEMORYLAYERDIALOGBASE_H
