#include<iostream>
using namespace std;

// whenever we pass an array in fun it goes like a pointer so the size is 8 or 4Byte
void sum(int *a, int n){
    cout<<sizeof(a)<<endl;
}

int fun(int *a, int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans += a[i];
    }
    return ans;
}

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(a)<<endl;
    sum(a, 10);
    cout<<fun(a+3,7);
}