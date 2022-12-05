#include "alarm.h"

Alarm::Alarm(QTime timeAlarm, QLabel descriptionAlarm)
{
    this->timeAlarm=timeAlarm;
    this->descriptionAlarm = descriptionAlarm.text();
}
Alarm::Alarm(QTime timeAlarm, QString descriptionAlarm,QString pathsAlarm)
{
    this->timeAlarm=timeAlarm;
    this->descriptionAlarm = descriptionAlarm;
    this->pathsAlarm = pathsAlarm;
}
QTime Alarm::getTimeAlarm()
{
    return timeAlarm;
}

void Alarm::setTimeAlarm(QTime newTimeAlarm)
{
    timeAlarm = newTimeAlarm;
}

QString Alarm::getDescAlarm()
{
    return descriptionAlarm;
}

void Alarm::setDescAlarm(QString newDescAlarm)
{
    descriptionAlarm = newDescAlarm;
}

QString Alarm::getPathsAlarm()
{
    return pathsAlarm;
}

void Alarm::setPathsAlarm(QString newPathsAlarm)
{
    pathsAlarm = newPathsAlarm;
}


void Alarm::alarmEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
}

Alarm::Alarm()
{
    this->timeAlarm.setHMS(0,0,0);
    this->descriptionAlarm = "\0";
}
