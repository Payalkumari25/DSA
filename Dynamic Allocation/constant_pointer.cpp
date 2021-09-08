#include<iostream>
using namespace std;

void g(int const &a){
   //a++; // read only access 
}

void f(const int *p){
    //(*p)++; // read only access 
}

int main(){

    int const i = 10;
    //int *p = &i; // error : i is const so *p also has to const then only it will store the address
    int const *p = &i;
    f(&i);
    g(i);

    int j = 20;
    int const *p2 = &j;
    cout<<"*p "<<*p<<endl;
    j++;
    cout<<"*p2 "<<*p2<<endl;
    
    
}