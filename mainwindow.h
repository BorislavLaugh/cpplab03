#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <Database.h>
#include "action.h"
#include "result.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:

    Records::Database * database;
    Action * action;
    Result * result;

public slots:
    void addNewCB();
    void displayAllCB();
    void displayCurrentCB();
    void deleteAllCB();
    void deleteCurrentCB();
    void promoteAllCB();
    void promoteCurrentCB();
    void demoteAllCB();
    void demoteCurrentCB();
    void worker_countCB();
    void get_currentCB();


};
#endif // MAINWINDOW_H
