#include<iostream>
using namespace std;
int main() {
    int size,temp;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array :- ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<=size-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array :-";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<endl;
    }
    int mid,key;
    int start=0;
    int end=size-1;
    cout<<"Enter the key :- ";
    cin>>key;
    while(start<=end) {
        mid=(start+end)/2;
        if(arr[mid]==key) {
            cout<<"The element is found at :- "<<mid<<endl;
            break;
        }
        else if(arr[mid]<key) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
}