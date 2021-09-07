#include<iostream>
using namespace std;

int main(){

    // character pointer display the all the character inside the array untill it reached to null
    int a[] = {1,2,3};
    char b[] = "abc";
    // differnce in cout of  char and integer array
    cout<<"address of a "<<a<<endl;
    cout<<"address of b "<<b<<endl;
    cout<<endl;

    // char *c = &b is not allowed
    char *c = &b[0];
    cout<<"address of c "<<c<<endl;
    cout<<endl;

    // if u have a variable that contain only one character then address of variable  will value itself,
    // if we take a pointer then address of that pointer will display value in that pointer as well as garbage value until until it reached to null
    char c1 = 'a';
    char *pc = &c1;
    cout<<"address of c1 "<<c1<<endl;
    cout<<"address of pc "<<pc<<endl;

    // differnce in char array and char pointer
    char str[] = "abcd"; // abcd store in temp and copy of temp is made for us so we can modify 
    char *pstr = "abcd"; // its danger because abcd store in temp and it directly point temp and incase temp is only Read only space so we can't modify
    cout<<"address of str "<<str<<endl;
    cout<<"address of pstr "<<pstr<<endl;



    return 0;
}