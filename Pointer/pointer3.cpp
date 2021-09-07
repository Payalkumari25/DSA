#include<iostream>
using namespace std;

int main(){

    int i;
    cout<<"value of i "<<i<<endl;

    i++; 
    cout<<"value of i "<<i<<endl;

    // Its too dangers because u randomly increase the garbage value and u didn't where it is now.
    // int *p;
    // cout<<"address of p "<<p<<endl;
    // cout<<"value of p "<<*p<<endl;
    // (*p)++;
    // cout<<"value of p "<<*p<<endl;
    // *p++;
    // cout<<"value of p "<<p<<endl;
    // cout<<endl;

    // when don't know where to allocate pointer simply point it to null
    int *p=0;
    cout<<"address of p "<<p<<endl;
    cout<<"value of p "<<*p<<endl;
    (*p)++;
    cout<<"value of p "<<*p<<endl;
    *p++;
    cout<<"value of p "<<p<<endl;


    return 0;
}