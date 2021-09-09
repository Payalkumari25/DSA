#include<iostream>
using namespace std;

int firstIndex(int arr[], int n, int x){

    // base case
    if(n==0) return -1;

    if(arr[0] == x) return 0;

    int ans = firstIndex(arr+1,n-1,x);
    if(ans == -1) return -1;
    else{
        return (ans+1);
    }
}

int main(){

    int arr[] = {5,5,6,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    cout<<"index of x "<<firstIndex(arr,n,x)<<endl;
}