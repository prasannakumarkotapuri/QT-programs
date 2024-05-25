#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QObject>
#include <QWidget>

class pushbutton : public QWidget
{
    Q_OBJECT
public:
    explicit pushbutton(QWidget *parent = nullptr);

signals:
};

#endif // PUSHBUTTON_H
