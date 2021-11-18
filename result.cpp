#include "result.h"

Result::Result(QWidget *parent) : QWidget(parent) {
    setGeometry(0, 0, 700, 750);
    topic = new QLabel("Результат виконання:", this);
    topic->setGeometry(400, 60, 200, 30);
    text = new QTextEdit(this);
    text->setGeometry(280, 120, 391, 581);
    text->setReadOnly(true);
}

Result::~Result() {
    delete topic;
    delete text;
}

void Result::set_text(QString msg) {
    text->setText(msg);
}
