#include<iostream>
#include<climits>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size :-";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array :-";
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    for(int i=0;i<size;i++) {
        int sum=0;
        for(int j=i;j<size;j++){
            sum=sum+arr[j];
            if(sum>maxsum) {
                maxsum=sum;
            }
        }
    }
    cout<<maxsum<<endl;
}