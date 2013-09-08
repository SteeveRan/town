#include <QtCore>

#ifndef PERSON_H
#define PERSON_H

class Deal
{
public:
    Deal();
    Deal(int, QString n);
    bool Execution();

    float timeToDeal;
    QString name;

};

class Person: QObject
{
    Q_OBJECT
public:
    Person();
    void AddToDo(Deal todo, float time);
    void CheckDeal();
    Deal Eat(float NutritionalValue, float time);
    Deal Go(QVector3D<float>, float time);
private:
    float hunger;
    float toilet;
    float WaitForDo;
    QVector<float> coor;
    QList<QPair<Deal,float>> ToDoList;

};



#endif // PERSON_H
