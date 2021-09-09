#include<iostream>
using namespace std;

int main(){

    string s1 = "hello world";
    cout<<s1<<endl;
    string* s2 = new string;
    *s2 = "Welcome everyone";
    cout<<s2<<endl;
    cout<<*s2<<endl;

    string str;
    //getline(cin, str);
    //cout<<str<<endl;
    str = "Welcome";
    cout<<str[0]<<endl;
    str[0] = 'H';
    cout<<str<<endl;

    string s3 = str + *s2;
    cout<<s3<<endl;
    cout<<s3.size()<<endl;
    cout<<s3.substr(3)<<endl;
    cout<<s3.substr(3,4)<<endl;
    cout<<s3.find("com")<<endl;
}