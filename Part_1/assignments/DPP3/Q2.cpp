// Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not 

#include <iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter the radius please:- ";
    cin>>radius;

    float pi = 3.14;
    float area = pi*radius*radius;
    float circumference = 2*pi*radius;

    if (area>circumference){
        cout<<"Area is greater than circumference";
    }
    else{
        cout<<"Circumference is greater than area";
    }

    return 0;
}