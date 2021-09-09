#include<iostream>
using namespace std;

int lastIndex(int arr[], int n, int x){

    //base case
    if(n==0) return -1;

    int ans = lastIndex(arr+1,n-1,x);

    if(ans == -1){
        if(arr[0]==x) return 0;
        else return -1;
    }else{
        return (ans + 1);
    }
}

int main(){

    int arr[] = {5,5,6,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    cout<<"last index of x "<<lastIndex(arr,n,x)<<endl;

}

