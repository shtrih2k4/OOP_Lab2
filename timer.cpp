#include "timer.h"

Timer::Timer(QTime time, QLabel description)
{
    this->time = time;
    this->description = description.text();

}

Timer::Timer(QTime time, QString description,QString paths)
{
    this->time = time;
    this->description = description;
    this->paths=paths;
}

QTime Timer::getTime()
{
    return time;
}

void Timer::setTime(QTime newTime)
{
    time = newTime;
}

QString Timer::getDesc()
{
    return description;
}

void Timer::setDesc(QString newDesc)
{
    description = newDesc;
}

QString Timer::getPaths()
{
    return paths;
}

void Timer::setPaths(QString newPaths)
{
    paths = newPaths;
}


void Timer::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
}

Timer::Timer()
{
    this->time.setHMS(0,0,0);
    this->description = "\0";
}
