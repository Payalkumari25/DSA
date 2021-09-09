#include<iostream>
using namespace std;

int keypad(int n, string output[]){

    //base case
    if(n == 0){
        output[0] = " ";
        return 0;
    }

    string smallCal = keypad(n/10, output);
    
}

int main(){

    int n;
    cin>>n;
    string* output = new string[1000];
    int count = keypad(n,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
}