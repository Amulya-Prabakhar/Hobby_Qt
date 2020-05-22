#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include<QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    //, ui(new Ui::Widget)
{
   // ui->setupUi(this);
    QPushButton * button = new QPushButton(this);
    button-> setText("Error");
    button -> move(200,200);
    connect(button, &QPushButton::clicked, [=](){
        QMessageBox messagebox;
        messagebox.setMinimumSize(200,200);
        messagebox.setWindowTitle("Error Message");
        messagebox.setText("Something Wrong happened");
        messagebox.setInformativeText("Check below for more information or to cancel");
        messagebox.setStandardButtons(QMessageBox::Ok | QMessageBox::Help | QMessageBox::Cancel);
        messagebox.setIcon(QMessageBox::Warning);
        messagebox.setDefaultButton(QMessageBox::Cancel);

        int ret = messagebox.exec();
        if (ret == QMessageBox::Ok)
        {
            qDebug() << "User clicked on Ok";
        }
        if (ret == QMessageBox::Cancel)
        {
            qDebug() << "User clicked on Cancel";
        }
        if (ret == QMessageBox::Help)
        {
            qDebug() << "User clicked on help";
        }

    });

}

Widget::~Widget()
{
    delete ui;
}

