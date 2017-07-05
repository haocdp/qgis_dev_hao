/****************************************************************************
** Meta object code from reading C++ file 'qgis_dev_browserdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgis_dev_browserdockwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgis_dev_browserdockwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qgis_dev_browserDockWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   28,   27,   27, 0x0a,
      63,   27,   27,   27, 0x0a,
      87,   27,   27,   27, 0x0a,
     102,   27,   27,   27, 0x0a,
     126,   27,   27,   27, 0x0a,
     144,   27,   27,   27, 0x0a,
     162,  154,   27,   27, 0x0a,
     192,  185,   27,   27, 0x0a,
     232,  218,   27,   27, 0x0a,
     255,   27,   27,   27, 0x0a,
     267,   27,   27,   27, 0x0a,
     285,   27,   27,   27, 0x0a,
     305,   27,   27,   27, 0x0a,
     322,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qgis_dev_browserDockWidget[] = {
    "qgis_dev_browserDockWidget\0\0index\0"
    "addLayerAtIndex(QModelIndex)\0"
    "showContextMenu(QPoint)\0addFavourite()\0"
    "addFavouriteDirectory()\0removeFavourite()\0"
    "refresh()\0visible\0showFilterWidget(bool)\0"
    "action\0setFilterSyntax(QAction*)\0"
    "caseSensitive\0setCaseSensitive(bool)\0"
    "setFilter()\0addCurrentLayer()\0"
    "addSelectedLayers()\0showProperties()\0"
    "toggleFastScan()\0"
};

void qgis_dev_browserDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qgis_dev_browserDockWidget *_t = static_cast<qgis_dev_browserDockWidget *>(_o);
        switch (_id) {
        case 0: _t->addLayerAtIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->addFavourite(); break;
        case 3: _t->addFavouriteDirectory(); break;
        case 4: _t->removeFavourite(); break;
        case 5: _t->refresh(); break;
        case 6: _t->showFilterWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFilterSyntax((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->setCaseSensitive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setFilter(); break;
        case 10: _t->addCurrentLayer(); break;
        case 11: _t->addSelectedLayers(); break;
        case 12: _t->showProperties(); break;
        case 13: _t->toggleFastScan(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qgis_dev_browserDockWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qgis_dev_browserDockWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_qgis_dev_browserDockWidget,
      qt_meta_data_qgis_dev_browserDockWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qgis_dev_browserDockWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qgis_dev_browserDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qgis_dev_browserDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qgis_dev_browserDockWidget))
        return static_cast<void*>(const_cast< qgis_dev_browserDockWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int qgis_dev_browserDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
