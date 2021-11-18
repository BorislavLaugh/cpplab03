#include "action.h"

#include <iostream>

Action::Action(QWidget *parent) : QWidget(parent) {

    setGeometry(0, 0, 700, 750);

    addNew = new QPushButton("Додати нового", this);
    addNew->setGeometry(30, 60, 231, 41);

    displayAll = new QPushButton("Показати всi", this);
    displayAll->setGeometry(30, 120, 231, 41);

    displayCurrent = new QPushButton("Показати поточний", this);
    displayCurrent->setGeometry(30, 180, 231, 41);

    deleteAll = new QPushButton("Видалити всi", this);
    deleteAll->setGeometry(30, 240, 231, 41);

    deleteCurrent = new QPushButton("Видалити поточний", this);
    deleteCurrent->setGeometry(30, 300, 231, 41);

    promoteAll = new QPushButton("Пiдвищити всiх", this);
    promoteAll->setGeometry(30, 360, 231, 41);

    promoteCurrent = new QPushButton("Пiдвищити поточного", this);
    promoteCurrent->setGeometry(30, 420, 231, 41);

    demoteAll = new QPushButton("Понизити всiх", this);
    demoteAll->setGeometry(30, 480, 231, 41);

    demoteCurrent = new QPushButton("Понизити поточного", this);
    demoteCurrent->setGeometry(30, 540, 231, 41);

    worker_count = new QPushButton("К-ть працiвникiв", this);
    worker_count->setGeometry(30, 600, 231, 41);

    get_current = new QPushButton("Номер поточного", this);
    get_current->setGeometry(30, 660, 231, 41);

    set_cb();
}

void Action::set_cb() {
    connect(addNew, SIGNAL(clicked()), parent(), SLOT(addNewCB()));
    connect(displayAll, SIGNAL(clicked()), parent(), SLOT(displayAllCB()));
    connect(displayCurrent, SIGNAL(clicked()), parent(), SLOT(displayCurrentCB()));
    connect(deleteAll, SIGNAL(clicked()), parent(), SLOT(deleteAllCB()));
    connect(deleteCurrent, SIGNAL(clicked()), parent(), SLOT(deleteCurrentCB()));
    connect(promoteAll, SIGNAL(clicked()), parent(), SLOT(promoteAllCB()));
    connect(promoteCurrent, SIGNAL(clicked()), parent(), SLOT(promoteCurrentCB()));
    connect(demoteAll, SIGNAL(clicked()), parent(), SLOT(demoteAllCB()));
    connect(demoteCurrent, SIGNAL(clicked()), parent(), SLOT(demoteCurrentCB()));
    connect(worker_count, SIGNAL(clicked()), parent(), SLOT(worker_countCB()));
    connect(get_current, SIGNAL(clicked()), parent(), SLOT(get_currentCB()));

}

Action::~Action() {
    delete displayAll;
    delete displayCurrent;
    delete deleteAll;
    delete deleteCurrent;
    delete promoteAll;
    delete promoteCurrent;
    delete demoteAll;
    delete demoteCurrent;
    delete worker_count;
    delete get_current;
}
