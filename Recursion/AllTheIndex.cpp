#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int allIndexRecursive(int arr[], int n, int x, int op[]){

    if(n==0) return 0;

    int ans = allIndexRecursive(arr+1,n-1,x,op);
    
    if(arr[0] == x){
        for(int i=ans-1;i>=0;i--){
            op[i+1] = op[i] + 1;
        }

        op[0] = 0;
        ans++;
        
    }else{
        for(int i=ans-1;i>=0;i--){
            op[i] = op[i] + 1;
        }
    }
 

    return ans;
}

void allIndex(int arr[], int n ,int x){

    int op[n];
    int size = allIndexRecursive(arr,n,x,op);
    for(int i=0;i<size;i++){
        cout<<op[i]<<" "<<endl;
    }
}
int main(){

    int arr[] = {5,6,5,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    allIndex(arr,n,x);
}