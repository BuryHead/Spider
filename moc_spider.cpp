/****************************************************************************
** Meta object code from reading C++ file 'spider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Spider/spider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Spider_t {
    QByteArrayData data[23];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Spider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Spider_t qt_meta_stringdata_Spider = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Spider"
QT_MOC_LITERAL(1, 7, 7), // "ui_init"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 16), // "refreshStockList"
QT_MOC_LITERAL(4, 33, 24), // "progressBar_valueChanged"
QT_MOC_LITERAL(5, 58, 5), // "value"
QT_MOC_LITERAL(6, 64, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(7, 92, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 116, 16), // "drawLineInCharts"
QT_MOC_LITERAL(9, 133, 20), // "on_startPage_clicked"
QT_MOC_LITERAL(10, 154, 19), // "on_lastPage_clicked"
QT_MOC_LITERAL(11, 174, 19), // "on_nextPage_clicked"
QT_MOC_LITERAL(12, 194, 18), // "on_endPage_clicked"
QT_MOC_LITERAL(13, 213, 8), // "loadData"
QT_MOC_LITERAL(14, 222, 7), // "getData"
QT_MOC_LITERAL(15, 230, 4), // "flag"
QT_MOC_LITERAL(16, 235, 12), // "getFinancial"
QT_MOC_LITERAL(17, 248, 3), // "str"
QT_MOC_LITERAL(18, 252, 16), // "refreshFinancial"
QT_MOC_LITERAL(19, 269, 9), // "writeData"
QT_MOC_LITERAL(20, 279, 6), // "Stock*"
QT_MOC_LITERAL(21, 286, 13), // "getMinuteData"
QT_MOC_LITERAL(22, 300, 4) // "sort"

    },
    "Spider\0ui_init\0\0refreshStockList\0"
    "progressBar_valueChanged\0value\0"
    "on_lineEdit_editingFinished\0"
    "on_pushButton_2_clicked\0drawLineInCharts\0"
    "on_startPage_clicked\0on_lastPage_clicked\0"
    "on_nextPage_clicked\0on_endPage_clicked\0"
    "loadData\0getData\0flag\0getFinancial\0"
    "str\0refreshFinancial\0writeData\0Stock*\0"
    "getMinuteData\0sort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    1,  111,    2, 0x08 /* Private */,
       6,    0,  114,    2, 0x08 /* Private */,
       7,    0,  115,    2, 0x08 /* Private */,
       8,    0,  116,    2, 0x08 /* Private */,
       9,    0,  117,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    1,  122,    2, 0x08 /* Private */,
      14,    0,  125,    2, 0x28 /* Private | MethodCloned */,
      16,    1,  126,    2, 0x08 /* Private */,
      18,    0,  129,    2, 0x08 /* Private */,
      19,    0,  130,    2, 0x08 /* Private */,
      14,    1,  131,    2, 0x08 /* Private */,
      21,    1,  134,    2, 0x08 /* Private */,
      22,    1,  137,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Spider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Spider *_t = static_cast<Spider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ui_init(); break;
        case 1: _t->refreshStockList(); break;
        case 2: _t->progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_editingFinished(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->drawLineInCharts(); break;
        case 6: _t->on_startPage_clicked(); break;
        case 7: _t->on_lastPage_clicked(); break;
        case 8: _t->on_nextPage_clicked(); break;
        case 9: _t->on_endPage_clicked(); break;
        case 10: _t->loadData(); break;
        case 11: _t->getData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->getData(); break;
        case 13: _t->getFinancial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->refreshFinancial(); break;
        case 15: _t->writeData(); break;
        case 16: _t->getData((*reinterpret_cast< Stock*(*)>(_a[1]))); break;
        case 17: _t->getMinuteData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->sort((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Spider::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Spider.data,
      qt_meta_data_Spider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Spider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Spider.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Spider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
