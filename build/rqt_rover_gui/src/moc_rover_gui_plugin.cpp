/****************************************************************************
** Meta object code from reading C++ file 'rover_gui_plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rqt_rover_gui/src/rover_gui_plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rover_gui_plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rqt_rover_gui__RoverGUIPlugin_t {
    QByteArrayData data[52];
    char stringdata0[1317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_rover_gui__RoverGUIPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_rover_gui__RoverGUIPlugin_t qt_meta_stringdata_rqt_rover_gui__RoverGUIPlugin = {
    {
QT_MOC_LITERAL(0, 0, 29), // "rqt_rover_gui::RoverGUIPlugin"
QT_MOC_LITERAL(1, 30, 18), // "sendInfoLogMessage"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 18), // "sendDiagLogMessage"
QT_MOC_LITERAL(4, 69, 19), // "sendDiagsDataUpdate"
QT_MOC_LITERAL(5, 89, 26), // "joystickDriveForwardUpdate"
QT_MOC_LITERAL(6, 116, 27), // "joystickDriveBackwardUpdate"
QT_MOC_LITERAL(7, 144, 23), // "joystickDriveLeftUpdate"
QT_MOC_LITERAL(8, 168, 24), // "joystickDriveRightUpdate"
QT_MOC_LITERAL(9, 193, 28), // "joystickGripperWristUpUpdate"
QT_MOC_LITERAL(10, 222, 30), // "joystickGripperWristDownUpdate"
QT_MOC_LITERAL(11, 253, 33), // "joystickGripperFingersCloseUp..."
QT_MOC_LITERAL(12, 287, 32), // "joystickGripperFingersOpenUpdate"
QT_MOC_LITERAL(13, 320, 23), // "updateObstacleCallCount"
QT_MOC_LITERAL(14, 344, 4), // "text"
QT_MOC_LITERAL(15, 349, 27), // "updateNumberOfTagsCollected"
QT_MOC_LITERAL(16, 377, 24), // "updateNumberOfSatellites"
QT_MOC_LITERAL(17, 402, 19), // "allStopButtonSignal"
QT_MOC_LITERAL(18, 422, 32), // "updateCurrentSimulationTimeLabel"
QT_MOC_LITERAL(19, 455, 22), // "receiveDiagsDataUpdate"
QT_MOC_LITERAL(20, 478, 21), // "receiveInfoLogMessage"
QT_MOC_LITERAL(21, 500, 21), // "receiveDiagLogMessage"
QT_MOC_LITERAL(22, 522, 31), // "currentRoverChangedEventHandler"
QT_MOC_LITERAL(23, 554, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(24, 571, 7), // "current"
QT_MOC_LITERAL(25, 579, 8), // "previous"
QT_MOC_LITERAL(26, 588, 27), // "pollRoversTimerEventHandler"
QT_MOC_LITERAL(27, 616, 30), // "GPSCheckboxToggledEventHandler"
QT_MOC_LITERAL(28, 647, 7), // "checked"
QT_MOC_LITERAL(29, 655, 30), // "EKFCheckboxToggledEventHandler"
QT_MOC_LITERAL(30, 686, 34), // "encoderCheckboxToggledEventHa..."
QT_MOC_LITERAL(31, 721, 44), // "overrideNumRoversCheckboxTogg..."
QT_MOC_LITERAL(32, 766, 34), // "mapSelectionListItemChangedHa..."
QT_MOC_LITERAL(33, 801, 12), // "changed_item"
QT_MOC_LITERAL(34, 814, 30), // "mapAutoRadioButtonEventHandler"
QT_MOC_LITERAL(35, 845, 6), // "marked"
QT_MOC_LITERAL(36, 852, 32), // "mapManualRadioButtonEventHandler"
QT_MOC_LITERAL(37, 885, 27), // "mapPopoutButtonEventHandler"
QT_MOC_LITERAL(38, 913, 31), // "joystickRadioButtonEventHandler"
QT_MOC_LITERAL(39, 945, 33), // "autonomousRadioButtonEventHan..."
QT_MOC_LITERAL(40, 979, 31), // "allAutonomousButtonEventHandler"
QT_MOC_LITERAL(41, 1011, 25), // "allStopButtonEventHandler"
QT_MOC_LITERAL(42, 1037, 29), // "customWorldButtonEventHandler"
QT_MOC_LITERAL(43, 1067, 34), // "customWorldRadioButtonEventHa..."
QT_MOC_LITERAL(44, 1102, 33), // "buildSimulationButtonEventHan..."
QT_MOC_LITERAL(45, 1136, 33), // "clearSimulationButtonEventHan..."
QT_MOC_LITERAL(46, 1170, 37), // "visualizeSimulationButtonEven..."
QT_MOC_LITERAL(47, 1208, 32), // "gazeboServerFinishedEventHandler"
QT_MOC_LITERAL(48, 1241, 21), // "displayInfoLogMessage"
QT_MOC_LITERAL(49, 1263, 3), // "msg"
QT_MOC_LITERAL(50, 1267, 21), // "displayDiagLogMessage"
QT_MOC_LITERAL(51, 1289, 27) // "refocusKeyboardEventHandler"

    },
    "rqt_rover_gui::RoverGUIPlugin\0"
    "sendInfoLogMessage\0\0sendDiagLogMessage\0"
    "sendDiagsDataUpdate\0joystickDriveForwardUpdate\0"
    "joystickDriveBackwardUpdate\0"
    "joystickDriveLeftUpdate\0"
    "joystickDriveRightUpdate\0"
    "joystickGripperWristUpUpdate\0"
    "joystickGripperWristDownUpdate\0"
    "joystickGripperFingersCloseUpdate\0"
    "joystickGripperFingersOpenUpdate\0"
    "updateObstacleCallCount\0text\0"
    "updateNumberOfTagsCollected\0"
    "updateNumberOfSatellites\0allStopButtonSignal\0"
    "updateCurrentSimulationTimeLabel\0"
    "receiveDiagsDataUpdate\0receiveInfoLogMessage\0"
    "receiveDiagLogMessage\0"
    "currentRoverChangedEventHandler\0"
    "QListWidgetItem*\0current\0previous\0"
    "pollRoversTimerEventHandler\0"
    "GPSCheckboxToggledEventHandler\0checked\0"
    "EKFCheckboxToggledEventHandler\0"
    "encoderCheckboxToggledEventHandler\0"
    "overrideNumRoversCheckboxToggledEventHandler\0"
    "mapSelectionListItemChangedHandler\0"
    "changed_item\0mapAutoRadioButtonEventHandler\0"
    "marked\0mapManualRadioButtonEventHandler\0"
    "mapPopoutButtonEventHandler\0"
    "joystickRadioButtonEventHandler\0"
    "autonomousRadioButtonEventHandler\0"
    "allAutonomousButtonEventHandler\0"
    "allStopButtonEventHandler\0"
    "customWorldButtonEventHandler\0"
    "customWorldRadioButtonEventHandler\0"
    "buildSimulationButtonEventHandler\0"
    "clearSimulationButtonEventHandler\0"
    "visualizeSimulationButtonEventHandler\0"
    "gazeboServerFinishedEventHandler\0"
    "displayInfoLogMessage\0msg\0"
    "displayDiagLogMessage\0refocusKeyboardEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_rover_gui__RoverGUIPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       3,    1,  227,    2, 0x06 /* Public */,
       4,    3,  230,    2, 0x06 /* Public */,
       5,    1,  237,    2, 0x06 /* Public */,
       6,    1,  240,    2, 0x06 /* Public */,
       7,    1,  243,    2, 0x06 /* Public */,
       8,    1,  246,    2, 0x06 /* Public */,
       9,    1,  249,    2, 0x06 /* Public */,
      10,    1,  252,    2, 0x06 /* Public */,
      11,    1,  255,    2, 0x06 /* Public */,
      12,    1,  258,    2, 0x06 /* Public */,
      13,    1,  261,    2, 0x06 /* Public */,
      15,    1,  264,    2, 0x06 /* Public */,
      16,    1,  267,    2, 0x06 /* Public */,
      17,    0,  270,    2, 0x06 /* Public */,
      18,    1,  271,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    3,  274,    2, 0x08 /* Private */,
      20,    1,  281,    2, 0x08 /* Private */,
      21,    1,  284,    2, 0x08 /* Private */,
      22,    2,  287,    2, 0x08 /* Private */,
      26,    0,  292,    2, 0x08 /* Private */,
      27,    1,  293,    2, 0x08 /* Private */,
      29,    1,  296,    2, 0x08 /* Private */,
      30,    1,  299,    2, 0x08 /* Private */,
      31,    1,  302,    2, 0x08 /* Private */,
      32,    1,  305,    2, 0x08 /* Private */,
      34,    1,  308,    2, 0x08 /* Private */,
      36,    1,  311,    2, 0x08 /* Private */,
      37,    0,  314,    2, 0x08 /* Private */,
      38,    1,  315,    2, 0x08 /* Private */,
      39,    1,  318,    2, 0x08 /* Private */,
      40,    0,  321,    2, 0x08 /* Private */,
      41,    0,  322,    2, 0x08 /* Private */,
      42,    0,  323,    2, 0x08 /* Private */,
      43,    1,  324,    2, 0x08 /* Private */,
      44,    0,  327,    2, 0x08 /* Private */,
      45,    0,  328,    2, 0x08 /* Private */,
      46,    0,  329,    2, 0x08 /* Private */,
      47,    0,  330,    2, 0x08 /* Private */,
      48,    1,  331,    2, 0x08 /* Private */,
      50,    1,  334,    2, 0x08 /* Private */,
      51,    0,  337,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QColor,    2,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QColor,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, 0x80000000 | 23,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,

       0        // eod
};

void rqt_rover_gui::RoverGUIPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoverGUIPlugin *_t = static_cast<RoverGUIPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInfoLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendDiagLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendDiagsDataUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 3: _t->joystickDriveForwardUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->joystickDriveBackwardUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->joystickDriveLeftUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->joystickDriveRightUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->joystickGripperWristUpUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->joystickGripperWristDownUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->joystickGripperFingersCloseUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->joystickGripperFingersOpenUpdate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->updateObstacleCallCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->updateNumberOfTagsCollected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->updateNumberOfSatellites((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->allStopButtonSignal(); break;
        case 15: _t->updateCurrentSimulationTimeLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->receiveDiagsDataUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3]))); break;
        case 17: _t->receiveInfoLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->receiveDiagLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->currentRoverChangedEventHandler((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 20: _t->pollRoversTimerEventHandler(); break;
        case 21: _t->GPSCheckboxToggledEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->EKFCheckboxToggledEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->encoderCheckboxToggledEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->overrideNumRoversCheckboxToggledEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->mapSelectionListItemChangedHandler((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 26: _t->mapAutoRadioButtonEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->mapManualRadioButtonEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->mapPopoutButtonEventHandler(); break;
        case 29: _t->joystickRadioButtonEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->autonomousRadioButtonEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->allAutonomousButtonEventHandler(); break;
        case 32: _t->allStopButtonEventHandler(); break;
        case 33: _t->customWorldButtonEventHandler(); break;
        case 34: _t->customWorldRadioButtonEventHandler((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->buildSimulationButtonEventHandler(); break;
        case 36: _t->clearSimulationButtonEventHandler(); break;
        case 37: _t->visualizeSimulationButtonEventHandler(); break;
        case 38: _t->gazeboServerFinishedEventHandler(); break;
        case 39: _t->displayInfoLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->displayDiagLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->refocusKeyboardEventHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RoverGUIPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::sendInfoLogMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::sendDiagLogMessage)) {
                *result = 1;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(QString , QString , QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::sendDiagsDataUpdate)) {
                *result = 2;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickDriveForwardUpdate)) {
                *result = 3;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickDriveBackwardUpdate)) {
                *result = 4;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickDriveLeftUpdate)) {
                *result = 5;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickDriveRightUpdate)) {
                *result = 6;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickGripperWristUpUpdate)) {
                *result = 7;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickGripperWristDownUpdate)) {
                *result = 8;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickGripperFingersCloseUpdate)) {
                *result = 9;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::joystickGripperFingersOpenUpdate)) {
                *result = 10;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::updateObstacleCallCount)) {
                *result = 11;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::updateNumberOfTagsCollected)) {
                *result = 12;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::updateNumberOfSatellites)) {
                *result = 13;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::allStopButtonSignal)) {
                *result = 14;
            }
        }
        {
            typedef void (RoverGUIPlugin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoverGUIPlugin::updateCurrentSimulationTimeLabel)) {
                *result = 15;
            }
        }
    }
}

const QMetaObject rqt_rover_gui::RoverGUIPlugin::staticMetaObject = {
    { &rqt_gui_cpp::Plugin::staticMetaObject, qt_meta_stringdata_rqt_rover_gui__RoverGUIPlugin.data,
      qt_meta_data_rqt_rover_gui__RoverGUIPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rqt_rover_gui::RoverGUIPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_rover_gui::RoverGUIPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_rover_gui__RoverGUIPlugin.stringdata0))
        return static_cast<void*>(const_cast< RoverGUIPlugin*>(this));
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int rqt_rover_gui::RoverGUIPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void rqt_rover_gui::RoverGUIPlugin::sendInfoLogMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rqt_rover_gui::RoverGUIPlugin::sendDiagLogMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rqt_rover_gui::RoverGUIPlugin::sendDiagsDataUpdate(QString _t1, QString _t2, QColor _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rqt_rover_gui::RoverGUIPlugin::joystickDriveForwardUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void rqt_rover_gui::RoverGUIPlugin::joystickDriveBackwardUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void rqt_rover_gui::RoverGUIPlugin::joystickDriveLeftUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void rqt_rover_gui::RoverGUIPlugin::joystickDriveRightUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void rqt_rover_gui::RoverGUIPlugin::joystickGripperWristUpUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void rqt_rover_gui::RoverGUIPlugin::joystickGripperWristDownUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void rqt_rover_gui::RoverGUIPlugin::joystickGripperFingersCloseUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void rqt_rover_gui::RoverGUIPlugin::joystickGripperFingersOpenUpdate(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void rqt_rover_gui::RoverGUIPlugin::updateObstacleCallCount(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void rqt_rover_gui::RoverGUIPlugin::updateNumberOfTagsCollected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void rqt_rover_gui::RoverGUIPlugin::updateNumberOfSatellites(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void rqt_rover_gui::RoverGUIPlugin::allStopButtonSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void rqt_rover_gui::RoverGUIPlugin::updateCurrentSimulationTimeLabel(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_END_MOC_NAMESPACE
