#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "timer.h"
#include "alarm.h"
#include <QMainWindow>
#include <QToolBar>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTimer>
#include <QTime>
#include <QLabel>
#include <QSplitter>
#include <QListWidget>
#include <QApplication>
#include <QFontDatabase>
#include <QList>
#include <QMessageBox>
#include <QTextEdit>
#include <QTimeEdit>
#include <QMediaPlayer>
#include <QSoundEffect>
#include <QAudioOutput>
#include <QCheckBox>
#include <QProcess>
#include <QDir>
#include <QPainter>
#include <QPainterPath>
#include <QSystemTrayIcon>
#include <QIcon>
#include <QFont>
#include <QListWidget>
#include <QShortcut>
#include <QSpinBox>
#include <QMenuBar>
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
    QTime temp;
    QTimer* alarm;
private:
 QMediaPlayer *player;
 QMediaPlayer *playerAlarm;
  QString figure;
  QString textDesk;
//Toolbar
    QToolBar *toolbar;
    QMenuBar*menubar;
    QSystemTrayIcon* m_systemTrayIcon;
    void setToolBar();
    QLabel *timelbl;
    //QLabel *alarmlbl;
//Main window widgets
    QLabel *mainTimerLbl;
    QTextEdit *mainTimerDescriptionLbl;
    QListWidget *listW;
    QListWidget *listB;
    QList<Timer> timers;
    QList<Alarm> alarms;
//Add window
    QWidget *addWindow;
    QWidget *addWindowAlarm;
    QSpinBox*amountTimer;
    QSpinBox*amountTimerAlarm;
    QLabel *addTimerLbl;
    QLabel *addAlarmLbl;
    QLabel *addDescLbl;
    QLabel *addDescLblAlarm;
    QLabel *addCountLbl;
    QLabel *addCountLblAlarm;
     QLabel *addPathsLbl;
      QLabel *addPathsLblAlarm;
    QTimeEdit *addTimeEdit;
    QTimeEdit *addTimeEditAlarm;
    QTextEdit *addTextEdit;
     QTextEdit *addTextEditAlarm;
    QTextEdit *addCountTextEdit;
     QTextEdit *addCountTextEditAlarm;
    QTextEdit *addPathsTextEdit;
      QTextEdit *addPathsTextEditAlarm;
    void addTimer();
    void addAlarm();
//Signal Window
   QWidget *signalWindow;
   QWidget *signalWindowAlarm;
   QLabel *timeoutLbl;
    QLabel *timeoutLblAlarm;
   QTextEdit *timeoutDescLbl;
    QTextEdit *timeoutDescLblAlarm;
   QPushButton *timeoutOKBtn;
   QPushButton *timeoutOKBtnAlarm;
   void timeoutWindow();
   void timeoutWindowAlarm();
//Edit Window
   QWidget *editWindow;
    QWidget *editWindowAlarm;
   QLabel *editTimeLbl;
   QLabel *editTimeLblAlarm;
   QLabel *editDescLbl;
    QLabel *editDescLblAlarm;
   QTimeEdit *editTimeEdit;
    QTimeEdit *editTimeEditAlarm;
   QTextEdit *editDescEdit;
   QTextEdit *editDescEditAlarm;
   QPushButton *editTimerBtn;
   QPushButton *editTimerBtnAlarm;
   void toEditWindow();
   void toEditWindowAlarm();
   Timer buffer;
   Alarm bufferAlarm;
   QString tmp;
   QString tmpAlarm;
    QString curTime;
     QString curTimeAlarm;
   int positionToEdit;
   int positionToEditAlarm;
//Info Window
   QWidget *settingsWindow;
   QLabel *doNotLbl;
   QCheckBox *doNotCheckBox;
   QPushButton *infoOKBtn;
   bool doNotDisturb;
//To Stop
   QVector<int> stoppedTimersPositions;
   QVector<int> stoppedAlarmsPositions;

private slots:
    void addTimerBtnClicked();
    void addAlarmBtnClicked();
    void stopTimer();
    void editTimerBtnClicked();
    void editAlarmBtnClicked();
    void deleteTimer();
    void deleteAlarm();
    void deleteAllTimers();
    void deleteAllAlarms();
    void settingsWindowSlot();
    void infoOKBtnClicked();
    void showDescription();
    void showDescriptionAlarm();

private:
    void timerEvent(QTimerEvent *e);
    void alarmEvent(QTimerEvent *e);
    QList<Timer> getTimers();
    void timersSort();
    void updateTimersListW();
    void updateAlarmsListB();

};

#endif // MAINWINDOW_H
