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
       database.setDatabaseName("vip.db");
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
       if(!sql_query.exec("create table vip(name text, pass text)"))
       {
           qDebug() << "Error: Fail to create table."<< sql_query.lastError();
       }
       else
       {
           qDebug() << "Table created!";
       }

       //插入数据
       sql_query.exec("INSERT INTO vip VALUES(3332, 322)");
       sql_query.exec("INSERT INTO vip VALUES(123232, 9455)");
       sql_query.exec("INSERT INTO vip VALUES(2465446, 954)");
       sql_query.exec("INSERT INTO vip VALUES(77657655, 154)");
       sql_query.exec("INSERT INTO vip VALUES(23435564, 433)");

    //Widget w;
    //w.show();
    MainWindow w;
    w.show();
   /* //删除表格
    sql_query.exec("drop table vip");
    if(sql_query.exec())
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        qDebug() << "table cleared";
    }

    //关闭数据库
    database.close();*/

    return a.exec();
}


