#include "engine1.h"

Engine1::Engine1(QObject *parent) :
    QObject(parent)
{
    CurrentDay = 0;
    CurrentHour = 0;
    CurrentMin = 0;
    Date ="0.0.0";
}

int Engine1::GetTime(int change)
{
    switch(change)
    {
        case 0:
            return CurrentMin;
            break;
        case 1:
            return CurrentHour;
            break;
        case 2:
            return CurrentDay;
            break;
        default:
            return 666;
            break;
    }
}

void Engine1::ChangeTime()
{
    CurrentMin++;
    if (CurrentMin==MinInHour)
    {
        CurrentMin=1;
        CurrentHour++;
    }
    if (CurrentHour==HourInDay)
    {
        CurrentHour=1;
        CurrentDay++;
    }

    QString m,h,d;
    Date = m.setNum(CurrentMin)+"."+h.setNum(CurrentHour)+"."+d.setNum(CurrentDay);
    emit TimeChanged(Date);

}


