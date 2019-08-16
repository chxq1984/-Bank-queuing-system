#include <QtGui/QApplication>
#include "mainwindow.h"

#include <qdebug.h>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariant>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    //建立并打开数据库
       QSqlDatabase database;
       database = QSqlDatabase::addDatabase("QSQLITE");
       database.setDatabaseName("boss.db");
       if (!database.open())
       {
           qDebug() << "Error: Failed to connect database." << database.lastError();
       }
       else
       {
           qDebug() << "Succeed to connect database." ;
       }

       //创建表格
       QSqlQuery sql_query;
       if(!sql_query.exec("create table boss(name text, pass text)"))
       {
           qDebug() << "Error: Fail to create table."<< sql_query.lastError();
       }
       else
       {
           qDebug() << "Table created!";
       }

       //插入数据
       sql_query.exec("INSERT INTO boss VALUES(222, 3333)");
       sql_query.exec("INSERT INTO boss VALUES(333, 333)");
       sql_query.exec("INSERT INTO boss VALUES(444, 444)");
       sql_query.exec("INSERT INTO boss VALUES(555, 555)");



    MainWindow w;
    w.show();

    return a.exec();
}
