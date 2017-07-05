/****************************************************************************
** Meta object code from reading C++ file 'qgis_dev_labelinggui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgis_dev_labelinggui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgis_dev_labelinggui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qgis_dev_labelingGui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      38,   29,   21,   21, 0x0a,
      59,   21,   21,   21, 0x0a,
      73,   67,   21,   21, 0x0a,
      97,   21,   21,   21, 0x0a,
     122,   67,   21,   21, 0x0a,
     148,   21,   21,   21, 0x0a,
     159,   21,   21,   21, 0x0a,
     175,   21,   21,   21, 0x0a,
     191,   21,   21,   21, 0x0a,
     224,  216,   21,   21, 0x0a,
     252,  250,   21,   21, 0x0a,
     294,  292,   21,   21, 0x0a,
     341,  335,   21,   21, 0x0a,
     393,  391,   21,   21, 0x0a,
     444,  439,   21,   21, 0x0a,
     499,  495,   21,   21, 0x0a,
     534,  495,   21,   21, 0x0a,
     581,  573,   21,   21, 0x0a,
     629,  573,   21,   21, 0x0a,
     679,   21,   21,   21, 0x0a,
     715,  712,   21,   21, 0x0a,
     757,  712,   21,   21, 0x0a,
     799,   21,   21,   21, 0x0a,
     837,  830,   21,   21, 0x0a,
     880,  830,   21,   21, 0x0a,
     923,  335,   21,   21, 0x0a,
     967,  335,   21,   21, 0x0a,
    1015,   21,   21,   21, 0x0a,
    1047,   21,   21,   21, 0x0a,
    1081,  439,   21,   21, 0x0a,
    1122,   21,   21,   21, 0x0a,
    1151,   67,   21,   21, 0x0a,
    1197,   21,   21,   21, 0x0a,
    1233,   21,   21,   21, 0x0a,
    1275, 1270,   21,   21, 0x08,
    1321, 1316,   21,   21, 0x08,
    1348, 1316,   21,   21, 0x08,
    1377,  439,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qgis_dev_labelingGui[] = {
    "qgis_dev_labelingGui\0\0init()\0collapse\0"
    "collapseSample(bool)\0apply()\0color\0"
    "changeTextColor(QColor)\0"
    "showEngineConfigDialog()\0"
    "changeBufferColor(QColor)\0updateUi()\0"
    "updatePreview()\0scrollPreview()\0"
    "updatePlacementWidgets()\0svgPath\0"
    "updateSvgWidgets(QString)\0i\0"
    "on_mPreviewSizeSlider_valueChanged(int)\0"
    "d\0on_mFontSizeSpinBox_valueChanged(double)\0"
    "index\0on_mFontCapitalsComboBox_currentIndexChanged(int)\0"
    "f\0on_mFontFamilyCmbBx_currentFontChanged(QFont)\0"
    "text\0on_mFontStyleComboBox_currentIndexChanged(QString)\0"
    "ckd\0on_mFontUnderlineBtn_toggled(bool)\0"
    "on_mFontStrikethroughBtn_toggled(bool)\0"
    "spacing\0on_mFontWordSpacingSpinBox_valueChanged(double)\0"
    "on_mFontLetterSpacingSpinBox_valueChanged(double)\0"
    "on_mFontSizeUnitWidget_changed()\0px\0"
    "on_mFontMinPixelSpinBox_valueChanged(int)\0"
    "on_mFontMaxPixelSpinBox_valueChanged(int)\0"
    "on_mBufferUnitWidget_changed()\0active\0"
    "on_mCoordXDDBtn_dataDefinedActivated(bool)\0"
    "on_mCoordYDDBtn_dataDefinedActivated(bool)\0"
    "on_mShapeTypeCmbBx_currentIndexChanged(int)\0"
    "on_mShapeRotationCmbBx_currentIndexChanged(int)\0"
    "on_mShapeSVGParamsBtn_clicked()\0"
    "on_mShapeSVGSelectorBtn_clicked()\0"
    "on_mPreviewTextEdit_textChanged(QString)\0"
    "on_mPreviewTextBtn_clicked()\0"
    "on_mPreviewBackgroundBtn_colorChanged(QColor)\0"
    "on_mDirectSymbLeftToolBtn_clicked()\0"
    "on_mDirectSymbRightToolBtn_clicked()\0"
    "indx\0optionsStackedWidget_CurrentChanged(int)\0"
    "show\0showBackgroundRadius(bool)\0"
    "showBackgroundPenStyle(bool)\0"
    "on_mShapeSVGPathLineEdit_textChanged(QString)\0"
};

void qgis_dev_labelingGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qgis_dev_labelingGui *_t = static_cast<qgis_dev_labelingGui *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->collapseSample((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->apply(); break;
        case 3: _t->changeTextColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->showEngineConfigDialog(); break;
        case 5: _t->changeBufferColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->updateUi(); break;
        case 7: _t->updatePreview(); break;
        case 8: _t->scrollPreview(); break;
        case 9: _t->updatePlacementWidgets(); break;
        case 10: _t->updateSvgWidgets((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_mPreviewSizeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_mFontSizeSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->on_mFontCapitalsComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_mFontFamilyCmbBx_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 15: _t->on_mFontStyleComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_mFontUnderlineBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_mFontStrikethroughBtn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_mFontWordSpacingSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->on_mFontLetterSpacingSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->on_mFontSizeUnitWidget_changed(); break;
        case 21: _t->on_mFontMinPixelSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_mFontMaxPixelSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_mBufferUnitWidget_changed(); break;
        case 24: _t->on_mCoordXDDBtn_dataDefinedActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->on_mCoordYDDBtn_dataDefinedActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_mShapeTypeCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->on_mShapeRotationCmbBx_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->on_mShapeSVGParamsBtn_clicked(); break;
        case 29: _t->on_mShapeSVGSelectorBtn_clicked(); break;
        case 30: _t->on_mPreviewTextEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->on_mPreviewTextBtn_clicked(); break;
        case 32: _t->on_mPreviewBackgroundBtn_colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 33: _t->on_mDirectSymbLeftToolBtn_clicked(); break;
        case 34: _t->on_mDirectSymbRightToolBtn_clicked(); break;
        case 35: _t->optionsStackedWidget_CurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->showBackgroundRadius((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->showBackgroundPenStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_mShapeSVGPathLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qgis_dev_labelingGui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qgis_dev_labelingGui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qgis_dev_labelingGui,
      qt_meta_data_qgis_dev_labelingGui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qgis_dev_labelingGui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qgis_dev_labelingGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qgis_dev_labelingGui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qgis_dev_labelingGui))
        return static_cast<void*>(const_cast< qgis_dev_labelingGui*>(this));
    return QWidget::qt_metacast(_clname);
}

int qgis_dev_labelingGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
