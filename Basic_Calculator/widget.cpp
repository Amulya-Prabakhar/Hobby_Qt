#include "widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
   //create a text box to display the calculations
    QFont labelFont("Times", 15, QFont::Bold);
    QLabel * label1 = new QLabel("Let's do some math", this);
    label1 -> setFont(labelFont);
    label1 -> move(40, 25);

    QTextEdit * textEdit = new QTextEdit(this);
    textEdit->setMaximumSize(1200,60);
    textEdit -> move(10, 45);

    //QSize(800,800);
    //Numbers entered or changed
    connect(textEdit, &QTextEdit::textChanged, [=](){
        qDebug() << "Text Changed ";
    });

    // AC button is implemented
    QPushButton * ACButton = new QPushButton("AC", this);
    ACButton->setMinimumSize(10,10);
    ACButton->move(10,115);
    connect(ACButton, &QPushButton::clicked, this, [=](){
       textEdit->clear();
       qDebug() << "AC button clicked";

});

   //plus or minus button is implemented
    QPushButton * PlusminusButton = new QPushButton("+/-", this);
    PlusminusButton->setMinimumSize(10,10);
    PlusminusButton->move(90,115);
    connect(PlusminusButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("-");
       qDebug() << "+/- button clicked";

});


    //percentage button is implemented
    QPushButton * percentageButton = new QPushButton("%", this);
    percentageButton->setMinimumSize(10,10);
    percentageButton->move(170, 115);
    connect(percentageButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("%");
       qDebug() << "% button clicked";});

    //division Button is implemented
    QPushButton * divisionButton = new QPushButton("/", this);
    divisionButton->setMinimumSize(10,10);
    divisionButton->move(250, 115);
    connect(divisionButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("/");
       qDebug() << "/ button clicked";});

    //Multiplication is implemented
    QPushButton * multiplicationButton = new QPushButton("*", this);
    multiplicationButton->setMinimumSize(10,10);
    multiplicationButton->move(250, 140);
    connect(multiplicationButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("*");
       qDebug() << "* button clicked";});

    //Addition is implemented
    QPushButton * additionButton = new QPushButton("+", this);
    additionButton->setMinimumSize(10,10);
    additionButton->move(250, 165);
    connect(additionButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("+");
       qDebug() << "+ button clicked";});

    //Subtraction is implemented
    QPushButton * SubtractionButton = new QPushButton("-", this);
    SubtractionButton->setMinimumSize(10,10);
    SubtractionButton->move(250, 190);
    connect(SubtractionButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("-");
       qDebug() << "- button clicked";});

    //Equalto is implemented
    QPushButton * EqualtoButton = new QPushButton("=", this);
    EqualtoButton->setMinimumSize(10,10);
    EqualtoButton->move(250, 215);
    connect(EqualtoButton, &QPushButton::clicked, this, [=](){
       textEdit->setText("=");
       qDebug() << "= button clicked";});


    //Number pane is implmented
    QPushButton * Button_7 = new QPushButton("7", this);
    Button_7->setMinimumSize(10,10);
    Button_7->move(10, 140);
    connect(Button_7, &QPushButton::clicked, this, [=](){
       textEdit->setText("7");
       qDebug() << "7 button clicked";});

    //Number pane is implemented
    QPushButton * Button_8 = new QPushButton("8", this);
    Button_8->setMinimumSize(10,10);
    Button_8->move(90, 140);
    connect(Button_8, &QPushButton::clicked, this, [=](){
       textEdit->setText("8");
       qDebug() << "8 button clicked";});

    //Number pane is implemented
    QPushButton * Button_9 = new QPushButton("9", this);
    Button_9->setMinimumSize(10,10);
    Button_9->move(170, 140);
    connect(Button_9, &QPushButton::clicked, this, [=](){
       textEdit->setText("9");
       qDebug() << "9 button clicked";});

    //Number pane is implemented
    QPushButton * Button_4 = new QPushButton("4", this);
    Button_4->setMinimumSize(10,10);
    Button_4->move(10, 165);
    connect(Button_4, &QPushButton::clicked, this, [=](){
       textEdit->setText("4");
       qDebug() << "4 button clicked";});

    //Number pane is implemented
    QPushButton * Button_5 = new QPushButton("5", this);
    Button_5->setMinimumSize(10,10);
    Button_5->move(90, 165);
    connect(Button_5, &QPushButton::clicked, this, [=](){
       textEdit->setText("5");
       qDebug() << "5 button clicked";});

    //Number pane is implemented
    QPushButton * Button_6 = new QPushButton("6", this);
    Button_6->setMinimumSize(10,10);
    Button_6->move(170, 165);
    connect(Button_6, &QPushButton::clicked, this, [=](){
       textEdit->setText("6");
       qDebug() << "6 button clicked";});

    //Number pane is implemented
    QPushButton * Button_1 = new QPushButton("1", this);
    Button_1->setMinimumSize(10,10);
    Button_1->move(10, 190);
    connect(Button_1, &QPushButton::clicked, this, [=](){
       textEdit->setText("1");
       qDebug() << "1 button clicked";});

    //Number pane is implemented
    QPushButton * Button_2 = new QPushButton("2", this);
    Button_2->setMinimumSize(10,10);
    Button_2->move(90, 190);
    connect(Button_2, &QPushButton::clicked, this, [=](){
       textEdit->setText("2");
       qDebug() << "2 button clicked";});

    //Number pane is implemented
    QPushButton * Button_3 = new QPushButton("3", this);
    Button_3->setMinimumSize(10,10);
    Button_3->move(170, 190);
    connect(Button_3, &QPushButton::clicked, this, [=](){
       textEdit->setText("3");
       qDebug() << "3 button clicked";});

    //Number pane is implemented
    QPushButton * Button_0 = new QPushButton("0", this);
    Button_0->setMinimumSize(155,10);
    Button_0->move(10, 215);
    connect(Button_0, &QPushButton::clicked, this, [=](){
       textEdit->setText("0");
       qDebug() << "0 button clicked";});

    //Number pane is implemented
    QPushButton * decimalbutton = new QPushButton(".", this);
    decimalbutton->setMinimumSize(10,10);
    decimalbutton->move(170, 215);
    connect(decimalbutton, &QPushButton::clicked, this, [=](){
       textEdit->setText(".");
       qDebug() << ". button clicked";});

}

Widget::~Widget()
{

}

