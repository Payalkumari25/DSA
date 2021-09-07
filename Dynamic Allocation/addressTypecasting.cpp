#include<iostream>
using namespace std;

int main(){

    int i = 65;
    char c = i; // explicitly typecasting
    cout<<"c: "<<c<<endl;

    int* p = &i;
    char* pc = (char*)p;  // implicitly typecasting
    cout<<"p: "<<p<<endl;
    cout<<"pc: "<<pc<<endl;
    cout<<endl;
    cout<<"p: "<<*p<<endl;
    cout<<"pc: "<<*pc<<endl;
    cout<<"*(pc + 1): "<<*(pc + 1)<<endl;
    cout<<"*(pc + 2): "<<*(pc + 2)<<endl;
    cout<<"*(pc + 3): "<<*(pc + 3)<<endl;
    
}