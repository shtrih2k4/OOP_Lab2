#ifndef ALARM_H
#define ALARM_H
#include <QTime>
#include <QLabel>
#include <QTime>

class Alarm
{
    QTime timeAlarm;
    QString descriptionAlarm;
    QString pathsAlarm;
    void alarmEvent(QTimerEvent *e);
public:
    Alarm();
    Alarm(QTime timeAlarm, QLabel descriptionAlarm);
    Alarm(QTime timeAlarm, QString descriptionAlarm, QString pathsAlarm );
    QTime getTimeAlarm();
    void setTimeAlarm(QTime newTimeAlarm);
    QString getDescAlarm();
    void setDescAlarm(QString newDescAalrm);
    QString getPathsAlarm();
    void setPathsAlarm(QString newPathsAlarm);
};

#endif // ALARM_H
