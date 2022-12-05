#ifndef TIMER_H
#define TIMER_H
#include <QTime>
#include <QLabel>
#include <QTime>


class Timer {
    QTime time;
    QString description;
    QString paths;
    void timerEvent(QTimerEvent *e);
public:
    Timer();
    Timer(QTime time, QLabel description);
    Timer(QTime time, QString description, QString paths );
    QTime getTime();
    void setTime(QTime newTime);
    QString getDesc();
    void setDesc(QString newDesc);
    QString getPaths();
    void setPaths(QString newPaths);
};

#endif // TIMER_H
