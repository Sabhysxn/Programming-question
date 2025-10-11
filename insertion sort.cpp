#include<iostream>
using namespace std;
int main() {
    int size,key;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array :- ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(int i=1;i<size;i++) {
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array is :- ";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}