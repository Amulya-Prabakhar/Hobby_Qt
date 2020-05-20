#include "simplewidget.h"
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>

SimpleWidget::SimpleWidget(QWidget *parent) : QWidget(parent)
{
//setWindowTitle("Lets ask you some question");

    //Adding a styled widget color
    QPalette labelpalette;
    labelpalette.setColor(QPalette::Window, Qt::yellow);
    labelpalette.setColor(QPalette::WindowText, Qt::darkBlue);


    //Adding a new Question using label
    QFont labelFont("Times", 15, QFont::Bold);
    QLabel *label = new QLabel(this);
    label->setText("1. What is your name ?");
    label->setFont(labelFont);
    label->setPalette(labelpalette);
     label->move(130,0);

    //Adding a styled widget and move it around

    labelpalette.setColor(QPalette::WindowText, Qt::darkGreen);

    QFont label2Font("Times", 15, QFont::Bold);
    QLabel *label2 = new QLabel(this);
    label2->setAutoFillBackground(false);
    label2->setText("My name is Bill Gates");
    label2->setFont(label2Font);
    label2->setPalette(labelpalette);
    label2->move(135,20);


    //Adding a button and move it around:

    QPushButton * hintbutton = new QPushButton(this);
    QFont hintbuttonFont("Times", 15, QFont::Bold);
    hintbutton->setText("Are you for Real!?");
    hintbutton->setFont(hintbuttonFont);
    hintbutton->move(150,60);
    connect(hintbutton, SIGNAL(clicked()), this, SLOT(buttonclicked()));

}

void SimpleWidget::buttonclicked()
{
    QMessageBox::information(this, "OMG!!", "So am I selected?");
}

QSize SimpleWidget::sizehint() const
{
    return QSize(1000, 800);
}
