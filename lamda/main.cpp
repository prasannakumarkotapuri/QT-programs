#include <iostream>

using namespace std;

int main()
{
    /*[](){

    cout << "Hello Prasnna!" << endl;
    }();

        auto func=[](){
        for(int i=1;i<10;i++){
            cout<<i<<" Hello prasanna\n";
        }
    };
    func();*/

     // using Parameters
    /*
    auto fun=[](int a,int b){
        cout<<"sum is: "<<a+b<<endl;
    };
    fun(6,4);
    */

    //Lambda function return ->type

   /* cout<<"sum is: "<<[](int a,int b)->int{return a*b;


    }(10,50)<<endl;*/

/*  Capture list
    int a=10;
    int b=20;
    [a,b](){
        cout<<"A is: "<<a<<endl<<"B is: "<<b<<endl;
    }();
          */


    //Capture Reffrence
    int a=20;
    int b=30;
    auto func=[=](){
        //cout<<"The inner value A is : "<<a<<"\n";
        //cout<<"The outer Value B is: "<<b<<"\n";

    };
    for(int i=1;i<5;i++){
             cout<<"The inner value A is : "<<a<<"\n";
        cout<<"The outer value B is: "<<b<<endl;
             func();
        a+=1;
             b+=1;
    }


}
