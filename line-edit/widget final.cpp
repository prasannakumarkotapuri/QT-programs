#include "widget.h"
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include<QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(400,400);
   QWidget *widget=new QWidget(this);
    widget->setStyleSheet("BackGround:white");
    widget->setMinimumSize(400,400);


    QLabel *BikeName=new QLabel("BikeModel*",this);
    BikeName->setMinimumSize(70,30);
    BikeName->setFont(QFont("Times",10,QFont::Bold));
    BikeName->move(10,10);
    BikeName->setStyleSheet("color:white");


    QLineEdit *Bike=new QLineEdit(this);
    Bike->setMinimumSize(100,30);
    Bike->move(100,10);
    Bike->setStyleSheet("Background:White");


    QLabel *Number=new QLabel("Number*",this);
    Number->setMinimumSize(70,30);
    Number->move(10,50);
    Number->setStyleSheet("Color:white");
    Number->setFont(QFont("Times",10,QFont::Bold));


    QLineEdit *no=new QLineEdit(this);
    no->setMinimumSize(100,30);
    no->move(100,50);
    no->setStyleSheet("BackGround:White");

    QLabel *year=new QLabel("Year*",this);
    year->setMinimumSize(70,30);
    year->move(20,90);
    year->setStyleSheet("color:White");
    year->setFont(QFont("Times",10,QFont::Bold));


    QLineEdit *Y=new QLineEdit(this);
    Y->setMinimumSize(100,30);
    Y->move(100,90);
    Y->setStyleSheet("background:white");

    QPushButton *button=new QPushButton("Submit*",this);
    button->move(150,130);
    button->setStyleSheet("color:white;background:green");

    connect(button, &QPushButton::clicked,[=](){
   QString BikeModel=Bike->text();
   QString Number=no->text();
   QString year=Y->text();


   if(!BikeModel.isEmpty()&& !Number.isEmpty()&& !year.isEmpty()){
       qDebug()<<"BikeName is " <<BikeModel<<"\n";
       qDebug()<<"Number is " <<Number<<"\n";
       qDebug()<<"Year is "  <<year<<"\n";
   }else{
       qDebug()<<"Some Fields are Messing !";
   }

    });

    connect(Bike,&QLineEdit::textEdited,[=](){
        qDebug()<<"Typing... : "<<Bike->text();
    });
    connect(no,&QLineEdit::textEdited,[=](){
        qDebug()<<"Typing... : "<<no->text();
    });
    connect(Y,&QLineEdit::textEdited,[=](){
        qDebug()<<"Typing... : "<<Y->text();
    });


    Bike->setPlaceholderText("Enter Model");
    no->setPlaceholderText("Enter Number");
    Y->setPlaceholderText("Enter Year");








}

Widget::~Widget() {}
