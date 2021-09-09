#include<iostream>
using namespace std;

// Wrong 
int allIndexRecursive(int arr[], int n, int x, int op[]){

    if(n==0) return 0;

    int ans = allIndexRecursive(arr,n-1,x,op);
    if(arr[n-1] == x){
        op[n-1] = x;
        ans++;
    }
    return ans;
}


void index(int arr[], int n ,int x){

    int op[n];
    int size = allIndexRecursive(arr,n,x,op);
    for(int i=0;i<size;i++){
        cout<<op[i]<<" "<<endl;
    }
}

int main(){

    int arr[] = {5,6,5,4,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    index(arr,n,x);
}