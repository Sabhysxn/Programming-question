#include<iostream>
using namespace std;

int hexadecimaltodecimal(int num) {
    int ans=0;
    int x=1;
    while(num>0) {
        int digit=num%10;
        ans=ans+x*digit;
        x=x*16;
        num=num/10;
    }
    return ans;
}
int main() {
    int num;
    cout<<"Enter the number"; 
    cin>>num;
    cout<<hexadecimaltodecimal(num)<<endl;
}