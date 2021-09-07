#include <iostream>
using namespace std;

int main()
{

    int i = 10;
    int *p = &i;

    cout << "address of p " << p << endl;
    p = p + 2;
    cout << "address of p " << p << endl;
    cout<<endl;
    cout << "address of p " << p << endl;
    p = p - 2;
    cout << "address of p " << p << endl;
    cout<<endl;
    double d = 10002983.08;
    double *dp  = &d;
    cout<<"address of dp " << dp << endl;
    dp++; 
    cout<<"address of dp " << dp << endl;

}