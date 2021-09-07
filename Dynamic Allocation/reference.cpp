#include <iostream>
using namespace std;

void increment(int& n){
    n++;
}

// bad practice 
int& f1(int n){
    int a = n;
    return a;
}
// bad practice 
int* f2(){
    int i = 10;
    return &i;
}

int main()
{

    int i = 10;
    // int i;
    // i = 10; This will work
    int& j = i; // reference
    // int &j;
    // j = i; This will not work u have to initialize reference variable
    
    int& x = f1(i);
    int* y = f2();
    
    increment(i);
    cout<<"i = "<<i<<endl;

    i++;
    cout << "j = " << j << endl;
    j++;
    cout << "i = " << i << endl;

    int k = 100;
    j = k;
    cout<< "i = " << j << endl;
}