#include<iostream>
using namespace std;
int main() {
    int size,temp;
    
    cout<<"Enter the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements of array\n";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    
    for(int i=0;i<size-1;i++) {
        for (int j=i+1;j<size;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array\n";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<"\n";
    }

}