#include<iostream>
using namespace std;

// Inline function simply copy the body and put it in the where function is called

// Benifit of inline functions is only when u have single statement
// 2-3 statements depends on compiler wheater they will be executed as inline or simply as a function
inline int max(int a, int b){
    return a > b ? a : b;
}

int main(){

    int a,b;
    cin>>a>>b;
    
    int c = max(a,b);
    cout<<"c: "<<c<<endl;
    int x,y;
    x=10,y=60;
    
    int z = max(x,y);
    cout<<"z: "<<z<<endl;
}