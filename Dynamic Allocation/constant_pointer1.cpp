#include<iostream>
using namespace std;

int main(){

    int i = 10;
    int j = 20;

    int const *p = &i;
    //(*p)++; // increment of read-only location
    p = &j;
    cout<<"*p "<<*p<<endl;

    int * const p3 = &i;
    (*p3)++; 
    cout<<"*p3 "<<*p3<<endl;
    //p3 = &j; //assignment of read-only variable

    int const * const p4 = &i;
    // p3 = &j; //assignment of read-only variable
    // (*p4)++; // increment of read-only location


}


