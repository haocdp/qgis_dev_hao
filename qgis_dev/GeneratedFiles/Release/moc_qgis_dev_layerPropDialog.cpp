/****************************************************************************
** Meta object code from reading C++ file 'qgis_dev_layerPropDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgis_dev_layerPropDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgis_dev_layerPropDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qgis_dev_layerPropDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      40,   34,   25,   25, 0x0a,
      81,   25,   25,   25, 0x0a,
     117,   25,   25,   25, 0x0a,
     168,  156,   25,   25, 0x0a,
     233,   25,   25,   25, 0x0a,
     278,  270,   25,   25, 0x0a,
     320,  156,   25,   25, 0x0a,
     392,   25,   25,   25, 0x0a,
     427,   25,   25,   25, 0x0a,
     463,   25,   25,   25, 0x0a,
     498,   25,   25,   25, 0x08,
     517,  513,   25,   25, 0x08,
     533,   25,   25,   25, 0x08,
     555,  549,   25,   25, 0x08,
     575,   25,   25,   25, 0x08,
     611,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qgis_dev_layerPropDialog[] = {
    "qgis_dev_layerPropDialog\0\0apply()\0"
    "value\0on_mTransparencySlider_valueChanged(int)\0"
    "on_mAddCategoryPushButton_clicked()\0"
    "on_mRemoveCategoryPushButton_clicked()\0"
    "item,column\0"
    "on_mAttributesTreeWidget_itemDoubleClicked(QTreeWidgetItem*,int)\0"
    "on_mFindMaximumValueButton_clicked()\0"
    "checked\0on_mDisplayDiagramsGroupBox_toggled(bool)\0"
    "on_mDiagramAttributesTreeWidget_itemDoubleClicked(QTreeWidgetItem*,int"
    ")\0"
    "on_mEngineSettingsButton_clicked()\0"
    "showSizeAttributeExpressionDialog()\0"
    "showAddAttributeExpressionDialog()\0"
    "settingsIsOk()\0dis\0ifDisLabel(int)\0"
    "enableDiagram()\0index\0diagramChanged(int)\0"
    "on_mBackgroundColorButton_clicked()\0"
    "on_mDiagramPenColorButton_clicked()\0"
};

void qgis_dev_layerPropDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qgis_dev_layerPropDialog *_t = static_cast<qgis_dev_layerPropDialog *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->on_mTransparencySlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_mAddCategoryPushButton_clicked(); break;
        case 3: _t->on_mRemoveCategoryPushButton_clicked(); break;
        case 4: _t->on_mAttributesTreeWidget_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_mFindMaximumValueButton_clicked(); break;
        case 6: _t->on_mDisplayDiagramsGroupBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_mDiagramAttributesTreeWidget_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_mEngineSettingsButton_clicked(); break;
        case 9: _t->showSizeAttributeExpressionDialog(); break;
        case 10: _t->showAddAttributeExpressionDialog(); break;
        case 11: _t->settingsIsOk(); break;
        case 12: _t->ifDisLabel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->enableDiagram(); break;
        case 14: _t->diagramChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_mBackgroundColorButton_clicked(); break;
        case 16: _t->on_mDiagramPenColorButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qgis_dev_layerPropDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qgis_dev_layerPropDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qgis_dev_layerPropDialog,
      qt_meta_data_qgis_dev_layerPropDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qgis_dev_layerPropDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qgis_dev_layerPropDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qgis_dev_layerPropDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qgis_dev_layerPropDialog))
        return static_cast<void*>(const_cast< qgis_dev_layerPropDialog*>(this));
    if (!strcmp(_clname, "Ui::qgis_dev_layerPropDialog"))
        return static_cast< Ui::qgis_dev_layerPropDialog*>(const_cast< qgis_dev_layerPropDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qgis_dev_layerPropDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
