 // Difference between static and dynamic memory allocation
    // Static : Auto release on basis of scope
    // Dynamic : Manual release is required


#include<iostream>
using namespace std; 

int main(){

    /* In this case, everytime new memory of 4byte is allocation and previous memory is release automatically when it come out of scope
    while(true){
        int i = 10;
    }
    */

    /* In this case, everytime new memory of 4byte is allocation in heap and previous memory(new int wala memory) is not release later on heap become full and it crashes
    while(true){
        int* p = new int; 
    }
    */

   int* p = new int;
   // p pointer delete nhi hua h jo p pointer jis memory ke address ko store kiya h woh delete hua h 
   delete p; // single element deletion

   p = new int[100];
   delete [] p; //array deletion
}