#include<iostream>
using namespace std;

int length(char c[]){

    if(c[0] == '\0'){
        return 0;
    }
    int smallCal = length(c+1);
    return 1 + smallCal;
}

int main(){

    char str[100];
    cin>>str;

    int l = length(str);
    cout<<"length: "<<l<<endl;
    
}