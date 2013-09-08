#include "currenttime.h"

CurrentTime::CurrentTime(QWidget *parent) :
    QStatusBar(parent)
{
    showMessage("0.0.0");
}

void CurrentTime::ReWriteCurrentMessadge(int min, int hour, int day)
{
    QString mins, hours, days, date;
    date = mins.setNum(min)+"."+hours.setNum(hour)+"."+days.setNum(day)+".";
    showMessage(date);
}

