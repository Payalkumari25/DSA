#include<iostream>
using namespace std;

int main(){

    const int i = 10;
    int const k = 20;

    // constant reference from a non const integer
    int j = 12;
    const int& k = j;
    j++;
    // k++; // only read access
    // here storage is not constant path is constant
    cout<<"k "<<k<<endl;


    // constant reference from a const integer
    int const i2 = 12;
    int const &k2 = i2;
    // k2++; // both have only read access 
    cout<<"i2 "<<k2<<endl;

    // reference from a const integer
    int const i3 = 30;
    //int &k3 = i3; // i3 have only read access so how k2 would not get R-W



}