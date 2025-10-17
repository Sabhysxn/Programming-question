#include<iostream>
using namespace std;
int main() {
    int side1,side2,side3;
    cout<<"Enter the value of size1,size2 and size3 : ";
    cin>>side1>>side2>>side3;
    if(side1==side2 || side2==side3) {
        cout<<"The triangle is equilateral";
    }
    else if(side1==side2 || side1==side3 || side2==side3) {
        cout<<"the triangle is isosceles";
    }
    else {
        cout<<"The triangle is scalene";
    }
}