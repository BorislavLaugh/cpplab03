#ifndef RESULT_H
#define RESULT_H

#include <QWidget>
#include <QTextEdit>
#include <QLabel>

class Result : public QWidget
{
    Q_OBJECT

public:
    Result(QWidget *parent);
    ~Result();

    void set_text(QString msg);

private:
    QTextEdit* text;
    QLabel* topic;
};

#endif // RESULT_H
