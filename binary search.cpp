#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key) {
    int start=0;
    int end=size;
    while(start<=end) {
        int mid=(start+end)/2;
        if(arr[mid]==key) {
            return mid;
        }
        else if(arr[mid]>key) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return -1;
}
int main() {
    int size;
    cout<<"Enter the size of array :- ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array :-";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key which want to find :- ";
    cin>>key;
    cout<<"The element is found at index :- "<<binarysearch(arr,size,key)<<endl;
}