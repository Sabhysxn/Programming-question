#include<iostream>
using namespace std;
int main() {
    int a,b;
    char op;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"ENter operand : ";
    cin>>op;
    switch(op) {
        case '+' : {
            cout<<a+b<<endl;
            break;
        }   
        case '-' : {
            cout<<a-b<<endl;
            break;
        }   
        case '*' : {
            cout<<a*b<<endl;
            break;
        }   
        case '/' : {
            cout<<a/b<<endl;
            break;
        }   
        case '%' : {
            cout<<a%b<<endl;
            break;
        }   
        default :{
            cout<<"Operator not found"<<endl;
        }
    }
}