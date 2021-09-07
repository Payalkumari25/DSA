#include<iostream>
using namespace std;

int main(){

    int i=10;
    int *p = &i;
    cout<<"Size of i "<<sizeof(i)<<endl;
    cout<<"Size of p "<<sizeof(p)<<endl;
    cout<<"value of i "<<i<<endl;
    cout<<"value of p "<<*p<<endl;
    i++;
    cout<<"value of i "<<i<<endl;
    cout<<"value of p "<<*p<<endl;
    cout<<endl;
    int a = *p;
    a++;
    cout<<"value of a "<<a<<endl;
    cout<<"value of p "<<*p<<endl;
    cout<<endl;
    i = 15;
    cout<<"value of i "<<i<<endl;
    cout<<"value of p "<<*p<<endl;
    cout<<endl;
    *p = 20;
    cout<<"value of i "<<i<<endl;
    cout<<"value of p "<<*p<<endl;
    (*p)++;
    cout<<"value of p "<<*p<<endl;
    cout<<endl;
    int *q = p;
    cout<<"value of q "<<*q<<endl;
    cout<<"value of p "<<*p<<endl;
    cout<<"value of i "<<i<<endl;

    return 0;
}