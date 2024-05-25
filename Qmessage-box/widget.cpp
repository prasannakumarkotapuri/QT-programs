#include "widget.h"
#include<QMessageBox>
#include<QPushButton>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{ resize(400,300);
   // QPushButton *button=new QPushButton(this);
    //button->settext("press");

   /* QMessageBox mbox;//=new QMessageBox(this);
    mbox.setText("This Document has been Modified\n");
    mbox.setInformativeText("Do you want to save your changes?");
    mbox.setStandardButtons(QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel);
    mbox.setDefaultButton(QMessageBox::Save);
    //mbox.setCheckBox(QMessageBox::Warning);
    int ret = mbox.exec();*/

    int ret = QMessageBox::warning(this, tr("My Application"),
        tr("The document has been modified.\n"
            "Do you want to save your changes?"),
            QMessageBox::Save | QMessageBox::Discard
            | QMessageBox::Cancel,
             QMessageBox::Save);
}

Widget::~Widget() {}
