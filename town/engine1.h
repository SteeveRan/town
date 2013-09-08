#ifndef ENGINE1_H
#define ENGINE1_H

#include <QObject>
#include "stdafx.h"

class Engine1 : public QObject
{
    Q_OBJECT
public:
    explicit Engine1(QObject *parent = 0);
    int GetTime(int change);
    QString GetDate() {return Date;}
    
signals:
    void TimeChanged(QString);
    
public slots:
    void ChangeTime();

private:
    int CurrentMin;
    int CurrentHour;
    int CurrentDay;
    QString Date;
    Person syt;


};

#endif // ENGINE1_H
