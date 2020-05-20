#ifndef SIMPLEWIDGET_H
#define SIMPLEWIDGET_H

#include <QObject>
#include <QWidget>

class SimpleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SimpleWidget(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void buttonclicked();
private:
    QSize sizehint() const;

};

#endif // SIMPLEWIDGET_H
