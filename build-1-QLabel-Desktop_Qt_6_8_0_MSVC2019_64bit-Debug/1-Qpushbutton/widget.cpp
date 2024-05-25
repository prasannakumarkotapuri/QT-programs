#include "widget.h"
#include<QPushButton>
#include<QLabel>
#include<QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{   setFixedSize(400,300);


    //Button Font;

    QFont buttonfont("Verdana",20,QFont::Bold);

    //button for C++;

    QPushButton *button=new QPushButton(this);
    button->setText("C++");
    button->setFont(buttonfont);
    button->move(30,40);
    button->setStyleSheet("color:blue;background-color:white");

    //lambda
    connect(button,&QPushButton::clicked,[=](){
        qDebug()<<"C++\n";
    });

    //button2 for Python;

    QPushButton *button2=new QPushButton(this);
    button2->setText("Python");
    button2->setFont(buttonfont);
    button2->move(120,40);
    button2->setStyleSheet("color:green;background-color:skyblue");
    connect(button2,&QPushButton::clicked,[=](){
        qDebug()<<"Python\n";
    });

    //button3 for Java
    QFont button3font("Arial",20,QFont::Bold);
    QPushButton *button3=new QPushButton(this);
    button3->setText("Java");
    button3->setFont(button3font);
    button3->move(260,40);
    button3->setStyleSheet("color:blck;background-color:orange");
    connect(button3,&QPushButton::clicked,[=](){
        qDebug()<<"Java\n";});
}

Widget::~Widget() {}
