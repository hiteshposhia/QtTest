/****************************************************************************
** Meta object code from reading C++ file 'squaretest.h'
**
** Created: Thu Oct 21 17:24:11 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GeometryTest/squaretest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'squaretest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SquareTest[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      27,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      65,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SquareTest[] = {
    "SquareTest\0\0initTestCase()\0testSide()\0"
    "testArea()\0testPerimeter()\0cleanupTestCase()\0"
};

const QMetaObject SquareTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SquareTest,
      qt_meta_data_SquareTest, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SquareTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SquareTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SquareTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SquareTest))
        return static_cast<void*>(const_cast< SquareTest*>(this));
    return QObject::qt_metacast(_clname);
}

int SquareTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: testSide(); break;
        case 2: testArea(); break;
        case 3: testPerimeter(); break;
        case 4: cleanupTestCase(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
