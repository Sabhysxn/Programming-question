#include<iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size :- ";
    cin>>size;
    int arr[size];
    cout<<"The elements of array is :- ";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++) {
        int current=0;
        for(int j=i;j<size;j++) {
            current=current+arr[j];
            cout<<current<<endl;
        }
    }
}