#include<iostream>
using namespace std;

// default argument
int sum(int a, int b, int c=0){
    return (a + b + c);
}

int main(){

    int ans = sum(90,80);
    cout<<"ans "<<ans<<endl;
}