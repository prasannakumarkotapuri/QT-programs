#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QGridLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //resize(700,600);

    QFont buttonfont("RockWell",20);
    QPushButton *button=new QPushButton(this);
    button->setText("RoyalEnfield");
    button->setFont(buttonfont);
    button->setStyleSheet("color:black;background:grey");


    QPushButton *button2=new QPushButton(this);
    button2->setText("K T M");
    button2->setFont(buttonfont);
    button2->setStyleSheet("color:black;background:ferrari red");

    QFont fontbutton("Walbaum",20,QFont::Bold);
    QPushButton *button3=new QPushButton(this);
    button3->setText("kawasaki");
    button->setFont(fontbutton);
    button3->setStyleSheet("color:black;background:green");


    QPushButton *button4=new QPushButton(this);
    button4->setText("Suzuki");
    button4->setFont(buttonfont);
    button4->setStyleSheet("color:white;background:blue");

   /* QHBoxLayout *hbox=new QHBoxLayout(this);
    hbox->addWidget(button);
    hbox->addWidget(button2);

    QVBoxLayout *vbox=new QVBoxLayout(this);
    vbox->addWidget(button3);
    vbox->addWidget(button4);
*/

    QGridLayout *grid=new QGridLayout(this);
    grid->addWidget(button);
    grid->addWidget(button2);
    grid->addWidget(button3);
    grid->addWidget(button4);
}

Widget::~Widget() {}
