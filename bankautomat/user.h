#ifndef USER_H
#define USER_H

#include <QString>
#include <QDebug>


class User
{

public:
    User(QString, QString, QString, QString);
    ~User();
    QString ID;
    QString name;
    QString add;
    QString pho;
};

#endif // USER_H
