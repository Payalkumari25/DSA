#include<iostream>
using namespace std;

void print(int n){

    //base case
    if(n>0){
       print(n-1);
       cout<<n<<" ";
    }
    return;
}

int main(){

    int n;
    cin>>n;
    print(n);
}