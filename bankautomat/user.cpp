#include "user.h"


User::User(QString IDparam, QString nameparam, QString addparam, QString phoparam)
{
    ID = IDparam;
    name = nameparam;
    add = addparam;
    pho = phoparam;
    qDebug()<< "Käyttäjä " + ID + " luotu";
}

User::~User()
{
    qDebug()<< "Käyttäjä " + ID + " tuhottu";
}
