#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}
void incrementPointer(int *p){
    p = p + 1;
}
void increment(int *p){
    (*p)++;
}

int main(){

    int i = 10;
    int *p = &i;

    print(p);
    cout<<endl;

    cout<<"address of p before fun call "<<p<<endl;
    incrementPointer(p);
    cout<<"address of p after fun call "<<p<<endl;
    cout<<endl;

    cout<<"address of p before fun call "<<*p<<endl;
    increment(p);
    cout<<"address of p after fun call "<<*p<<endl;


}