#include<iostream>
using namespace std;

int main(){

    int a[10];
    cout<<"address of a "<<a<<endl;
    cout<<"address of a "<<&a[0]<<endl;
    a[0] = 20;
    a[1] = 50;
    // a[i] == *(a+i)
    cout<<"value of  a[0] is "<< *a<<endl;
    cout<<"value of  a[1] is "<< *(a+1)<<endl;
    cout<<endl;

    // Difference between array and pointer : array can't be reassign
    int *p = &a[0];
    cout<<"address of a "<<&a<<endl;
    cout<<"address of p "<<&p<<endl;
    cout<<endl;

    cout<<"size of a "<<sizeof(a)<<endl;
    cout<<"size of p "<<sizeof(p)<<endl;
    cout<<endl;

    p = p + 1;
    p = a + 1;
    // This are not allowed : a = a + 1 , a++;
    //a = a + 1;
    //a++;



    return 0;
}