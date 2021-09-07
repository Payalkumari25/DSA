#include<iostream>
using namespace std;

int main(){

    int* p = new int;  // 4bytes in heap and 8bytes in stack
    *p = 10;
    cout<<"*p "<<*p<<endl;

    double *pd = new double;
    char *c = new char;

    int* ptr = new int[100]; // 200bytes in the heap(i.e new keyword) and 8bytes in stack (by pointer)

    int n;
    cout<<"Enter the element ";
    cin>>n;
    int* a = new int[n]; // dyanmic allocation
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx = -1;
    for(int i=0;i<n;i++){
        mx = max(mx,a[i]);
    }
    cout<<"max: " << mx<<endl;

   delete [] a;  // deallocate memory

}