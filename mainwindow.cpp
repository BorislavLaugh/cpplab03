#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    setFixedSize(QSize(700, 750));
    setWindowTitle("Lab 3");

    database = new Records::Database();
    result = new Result(this);
    action = new Action(this);

}

MainWindow::~MainWindow()
{
    delete database;
    delete action;
    delete result;
}


void MainWindow::addNewCB() {
    auto res = database->addWorker(std::to_string(database->worker_count() + 1), "Worker");
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::displayAllCB() {
    auto res = database->displayAll();
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::displayCurrentCB() {
    auto res = database->displayCurrent();
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::deleteAllCB() {
    auto res = database->deleteAll();
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::deleteCurrentCB() {
    auto res = database->deleteCurrent();
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::promoteAllCB() {
    auto res = database->promoteAll(1000);
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::promoteCurrentCB() {
    auto res = database->promoteCurrent(1000);
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::demoteAllCB() {
    auto res = database->demoteAll(1000);
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::demoteCurrentCB() {
    auto res = database->demoteCurrent(1000);
    result->set_text(QString::fromUtf8(res.c_str()));
}

void MainWindow::worker_countCB() {
    auto res = database->worker_count();
    result->set_text(QString::number(res));
}

void MainWindow::get_currentCB() {
    auto res = database->get_current();
    result->set_text(QString::number(res));
}
