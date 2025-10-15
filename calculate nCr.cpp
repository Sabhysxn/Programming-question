#include<iostream>
using namespace std;
int fact(int num) {
    int factorial=1;
    for(int i=2;i<=num;i++) {
        factorial=factorial*i;
    }
    return factorial;
}
int main() {
    int num,r;
    cout<<"Enter the number : ";
    cin>>num>>r;
    int ans = fact(num)/(fact(r)*fact(num-r));
    cout<<ans<<endl;
}