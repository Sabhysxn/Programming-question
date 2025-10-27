#include<iostream>
using namespace std;

int octaltodecimal(int num) {
    int ans=0;
    int x=1;
    while(num>0) {
        int digit=num%10;
        ans=ans+x*digit;
        x=x*8;
        num=num/10;
    }
    return ans;
}
int main() {
    int num;
    cout<<"Enter the number:- ";
    cin>>num;
    cout<<octaltodecimal(num)<<endl;
}