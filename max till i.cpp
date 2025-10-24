#include<iostream>
using namespace std;
int main() {
    int size,max;
    int mx = -1999999999;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<"ENter the elements :- ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++) {
        if(arr[i]>mx){
            mx=arr[i];
        }
        cout<<"Array is :- "<<mx<<endl;
    }
    return 0;
}