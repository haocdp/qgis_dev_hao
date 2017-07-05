/****************************************************************************
** Meta object code from reading C++ file 'qgis_devattrtabledialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgis_devattrtabledialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgis_devattrtabledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qgis_devattrtableDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   25,   24,   24, 0x05,
      60,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      84,   24,   24,   24, 0x0a,
     101,   24,   24,   24, 0x08,
     138,   24,   24,   24, 0x08,
     172,   24,   24,   24, 0x08,
     202,   24,   24,   24, 0x08,
     238,   24,   24,   24, 0x08,
     274,   24,   24,   24, 0x08,
     316,   24,   24,   24, 0x08,
     357,   24,   24,   24, 0x08,
     391,   24,   24,   24, 0x08,
     418,   24,   24,   24, 0x08,
     448,   24,   24,   24, 0x08,
     482,   24,   24,   24, 0x08,
     517,   24,   24,   24, 0x08,
     550,   24,   24,   24, 0x08,
     575,   24,   24,   24, 0x08,
     600,   24,   24,   24, 0x08,
     637,   24,   24,   24, 0x08,
     651,   24,   24,   24, 0x08,
     677,   24,   24,   24, 0x08,
     693,   24,   24,   24, 0x08,
     710,   24,   24,   24, 0x08,
     726,   24,   24,   24, 0x08,
     754,  741,   24,   24, 0x08,
     790,  784,   24,   24, 0x08,
     818,   24,   24,   24, 0x08,
     840,   24,   24,   24, 0x08,
     895,  856,   24,   24, 0x08,
     989,  962,   24,   24, 0x28,
    1042,   24,   24,   24, 0x08,
    1070,   24,   24,   24, 0x08,
    1124, 1106,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qgis_devattrtableDialog[] = {
    "qgis_devattrtableDialog\0\0layer\0"
    "editingToggled(QgsMapLayer*)\0"
    "saveEdits(QgsMapLayer*)\0editingToggled()\0"
    "on_mCopySelectedRowsButton_clicked()\0"
    "on_mToggleEditingButton_toggled()\0"
    "on_mSaveEditsButton_clicked()\0"
    "on_mInvertSelectionButton_clicked()\0"
    "on_mRemoveSelectionButton_clicked()\0"
    "on_mZoomMapToSelectedRowsButton_clicked()\0"
    "on_mPanMapToSelectedRowsButton_clicked()\0"
    "on_mSelectedToTopButton_toggled()\0"
    "on_mAddAttribute_clicked()\0"
    "on_mRemoveAttribute_clicked()\0"
    "on_mOpenFieldCalculator_clicked()\0"
    "on_mDeleteSelectedButton_clicked()\0"
    "on_mMainView_currentChanged(int)\0"
    "on_mAddFeature_clicked()\0"
    "on_mHelpButton_clicked()\0"
    "on_mExpressionSelectButton_clicked()\0"
    "updateTitle()\0filterExpressionBuilder()\0"
    "filterShowAll()\0filterSelected()\0"
    "filterVisible()\0filterEdited()\0"
    "filterAction\0filterColumnChanged(QObject*)\0"
    "query\0filterQueryChanged(QString)\0"
    "filterQueryAccepted()\0columnBoxInit()\0"
    "layer,fieldName,expression,filteredIds\0"
    "runFieldCalculation(QgsVectorLayer*,QString,QString,QgsFeatureIds)\0"
    "layer,fieldName,expression\0"
    "runFieldCalculation(QgsVectorLayer*,QString,QString)\0"
    "updateFieldFromExpression()\0"
    "updateFieldFromExpressionSelected()\0"
    "fieldName,isValid\0updateButtonStatus(QString,bool)\0"
};

void qgis_devattrtableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qgis_devattrtableDialog *_t = static_cast<qgis_devattrtableDialog *>(_o);
        switch (_id) {
        case 0: _t->editingToggled((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 1: _t->saveEdits((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 2: _t->editingToggled(); break;
        case 3: _t->on_mCopySelectedRowsButton_clicked(); break;
        case 4: _t->on_mToggleEditingButton_toggled(); break;
        case 5: _t->on_mSaveEditsButton_clicked(); break;
        case 6: _t->on_mInvertSelectionButton_clicked(); break;
        case 7: _t->on_mRemoveSelectionButton_clicked(); break;
        case 8: _t->on_mZoomMapToSelectedRowsButton_clicked(); break;
        case 9: _t->on_mPanMapToSelectedRowsButton_clicked(); break;
        case 10: _t->on_mSelectedToTopButton_toggled(); break;
        case 11: _t->on_mAddAttribute_clicked(); break;
        case 12: _t->on_mRemoveAttribute_clicked(); break;
        case 13: _t->on_mOpenFieldCalculator_clicked(); break;
        case 14: _t->on_mDeleteSelectedButton_clicked(); break;
        case 15: _t->on_mMainView_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_mAddFeature_clicked(); break;
        case 17: _t->on_mHelpButton_clicked(); break;
        case 18: _t->on_mExpressionSelectButton_clicked(); break;
        case 19: _t->updateTitle(); break;
        case 20: _t->filterExpressionBuilder(); break;
        case 21: _t->filterShowAll(); break;
        case 22: _t->filterSelected(); break;
        case 23: _t->filterVisible(); break;
        case 24: _t->filterEdited(); break;
        case 25: _t->filterColumnChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 26: _t->filterQueryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->filterQueryAccepted(); break;
        case 28: _t->columnBoxInit(); break;
        case 29: _t->runFieldCalculation((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QgsFeatureIds(*)>(_a[4]))); break;
        case 30: _t->runFieldCalculation((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 31: _t->updateFieldFromExpression(); break;
        case 32: _t->updateFieldFromExpressionSelected(); break;
        case 33: _t->updateButtonStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qgis_devattrtableDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qgis_devattrtableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qgis_devattrtableDialog,
      qt_meta_data_qgis_devattrtableDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qgis_devattrtableDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qgis_devattrtableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qgis_devattrtableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qgis_devattrtableDialog))
        return static_cast<void*>(const_cast< qgis_devattrtableDialog*>(this));
    if (!strcmp(_clname, "Ui::QgsAttributeTableDialog"))
        return static_cast< Ui::QgsAttributeTableDialog*>(const_cast< qgis_devattrtableDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qgis_devattrtableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void qgis_devattrtableDialog::editingToggled(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qgis_devattrtableDialog::saveEdits(QgsMapLayer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
