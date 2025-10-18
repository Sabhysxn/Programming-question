#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Factorial of " << num << "is : "<<endl;
    for(int i=1;i<=num;i++) {
        if(num%i==0) {
            cout<<i<<" ";
        }
    }
}