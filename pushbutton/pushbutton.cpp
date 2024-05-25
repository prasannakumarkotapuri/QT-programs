#include "pushbutton.h"
#include<QPushButton>


pushbutton::pushbutton(QWidget *parent)
    : QWidget{parent}
{        setFixedSize(400,200);
    // Button1

    QFont buttonfont("bold",20);
    QPushButton *button=new QPushButton(this);
    button->setText("Volume Up");
    button->setFont(buttonfont);
    button->move(30,25);
    connect(button,&QPushButton::clicked,[=](){

      qDebug()<<"Volume Up\n";
});


   // Button2

    QPushButton *button2=new QPushButton(this);
    button2->setText("Volume Down");
    button2->setFont(buttonfont);
    button2->move(200,100);
    connect(button2,&QPushButton::clicked,[=](){
        qDebug()<<"Volume Down\n";
    });


    connect(button2,&QPushButton::released,[=](){
        qDebug()<<"Released \n";
    });

}
