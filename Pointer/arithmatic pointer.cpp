#include<iostream>
using namespace std;

int main(){

    int i=10;
    int *p = &i;

    cout<<"address of p "<<p<<endl;
    p = p + 2;
    cout<<"address of p "<<p<<endl;
}