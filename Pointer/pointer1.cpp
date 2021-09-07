#include <iostream>
using namespace std;

int main()
{

    int i = 10;
    cout << &i << endl;
    // Pointer are the variable which store the address of another variable in
    int *p = &i;
    cout << "address of integer i" << p << endl;
    // dereferncing: Give me the value pointed by p
    cout << "value at p " << *p << endl;

    float f = 50.0;
    float *pf = &f;
    cout << "address of float f" << pf << endl;

    double d = 60.999887;
    double *pd = &d;
    cout << "address of double d" << pd << endl;
}