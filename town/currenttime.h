#ifndef CURRENTTIME_H
#define CURRENTTIME_H


#include "stdafx.h"

class CurrentTime : public QStatusBar
{
    Q_OBJECT
public:
    CurrentTime(QWidget *parent = 0);
    void ReWriteCurrentMessadge(int,int,int);

signals:
    
public slots:


};

#endif // CURRENTTIME_H
