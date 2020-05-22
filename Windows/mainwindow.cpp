#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QStatusBar>
#include <QDebug>
#include <QMenuBar>
#include <QAction>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton * button = new QPushButton("Welcome to Quarantine Entertainement Event, All Entertainment in one place", this);
    setCentralWidget(button);

   //QAction * quitaction = new QAction("Quit");

    //Defining menu bar and menu tabs
    menuBar()->addMenu("Music");
    menuBar()->addMenu("Draw");
    menuBar()-> addMenu("simply shop");
    menuBar()-> addMenu("Games");
    menuBar()->addMenu("Exercise");
    menuBar()-> addMenu("settings");
    menuBar()->addMenu("Help");

    statusBar()->showMessage("Connecting to page ..", 3000);




}

MainWindow::~MainWindow()
{
    delete ui;
}

