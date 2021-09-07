#include<iostream>
using namespace std;

void fun1(int ** p){
    p = p + 1;
    cout<<"p"<<p<<endl;
}

void fun2(int ** p){
    *p = *p + 1;
    cout<<"*p"<<*p<<endl;
}


void fun3(int ** p){
    **p = **p + 5;
    cout<<"**p "<<**p<<endl;
}

int main(){

    int i = 10;
    int *p = &i;

    int* *p2 = &p;
    // cout<<"address of p "<<&p<<endl;
    // cout<<"value of p2 "<<p2<<endl;
    // cout<<endl;
    // cout<<"value at *p2 "<<*p2<<endl;
    // cout<<"value of p "<<p<<endl;

    
    // cout<<"Before fun1 value  of **p "<<p2<<endl;
    // fun1(p2);
    // cout<<"after fun1 value of **p "<<p2<<endl;
    // cout<<endl;

    // cout<<"before fun2 value of *p2 "<<*p2<<endl;
    // fun2(p2);
    // cout<<"after fun2 value of *p2 "<<*p2<<endl;
    // cout<<endl;

    cout<<"before fun3 value of i "<<i<<endl;
    fun3(p2);
    cout<<"after fun3 value of i "<<i<<endl;
    cout<<endl;



}