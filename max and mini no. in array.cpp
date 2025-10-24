#include<iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<"The elements is :- ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    int max=arr[0];
    int  mini=arr[0];
    for(int i=0;i<size;i++) {
        max=arr[0];
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<mini) {
            mini=arr[i];
        }
    }
    cout<<"maximum no. is :-"<<max<<endl;
    cout<<"Minimum value is :- "<<mini;
}