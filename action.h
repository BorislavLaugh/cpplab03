#ifndef ACTION_H
#define ACTION_H

#include <QWidget>
#include <QPushButton>

typedef std::shared_ptr<QPushButton> but_ptr;

class Action : public QWidget
{
    Q_OBJECT

public:
    Action(QWidget *parent);
    ~Action();

private:
    QPushButton * addNew;
    QPushButton * displayAll;
    QPushButton * displayCurrent;
    QPushButton * deleteAll;
    QPushButton * deleteCurrent;
    QPushButton * promoteAll;
    QPushButton * promoteCurrent;
    QPushButton * demoteAll;
    QPushButton * demoteCurrent;
    QPushButton * worker_count;
    QPushButton * get_current;

    void set_cb();
};

#endif // ACTION_H
