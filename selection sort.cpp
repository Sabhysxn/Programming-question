#include<iostream>
using namespace std;
int main() {
    int size,temp;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements :- ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++) {
        for(int j=i+1;j<size;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted array :- ";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}