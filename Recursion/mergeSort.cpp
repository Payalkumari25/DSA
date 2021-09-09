#include<iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e){

    int n1 = mid - s + 1;
    int n2 = e - mid;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++){
        L[i] = arr[s+i];
    }
    for(int i=0; i<n2; i++){
        R[i] = arr[mid+1+i];
    }
    int i =0,j=0,k=s;
    while(i<n1 && j<n2){

        if(L[i]<R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int s, int e){

    if(s>=e) return;
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,mid,e);
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {2,6,8,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);
    print(arr,n);

}