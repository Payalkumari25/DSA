#include<iostream>
using namespace std;

void removeX(char c[]){

    //base case
    if(c[0] =='\0'){
        return;
    }

    if(c[0] != 'x'){
        removeX(c+1);
    }else{
        int i=1;
        for(;c[i]!='\0';i++){
            c[i-1] = c[i];
        }
        c[i-1] = c[i];
        removeX(c);
    }
}

int length(char c[]){

    //base case
    if(c[0]=='\0'){
        return 0;
    }
    int smallCal = length(c+1);
    return 1 + smallCal;
}

int main(){

    char str[100];
    cin>>str;
    cout<<"length: "<<length(str)<<endl;
    removeX(str);
    cout<<str<<endl;
    cout<<"length "<<length(str)<<endl;
}