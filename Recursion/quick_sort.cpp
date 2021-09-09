#include<iostream>
using namespace std;

void swap(int *a, int *b){

    int c = *a;
    *a = *b;
    *b = c;
}

int partition(int arr[], int l, int h){

    int p = arr[h];
    int i = l-1;

    for(int j=l;j<=h-1;j++){

        if(arr[j]<p){
            i++; 
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;

}

void quickSort(int arr[], int l, int h){

    //base case
    if(l<h){
        int p = partition(arr,l,h);

        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {2,6,8,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);
    print(arr,n);
}