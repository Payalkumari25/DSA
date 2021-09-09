#include<iostream>
using namespace std;

int subseq(string str, string output[]){

    // base case
    if(str.empty()){
        output[0] = " ";
        return 1;
    }
    string smalloutput = str.substr(1);
    int smallCalsize = subseq(smalloutput, output);
    for(int i=0;i<smallCalsize;i++){
        output[smallCalsize + i] = str[0] + output[i];
    }
    return  2*smallCalsize;
}

int main(){

    string str;
    cin>> str;
    string* output = new string[1000];
    int count = subseq(str, output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }

}