// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

#include <iostream>
using namespace std;
int main(){
    float length,breadth;
    cout<<"Enter the length:- ";
    cin>>length;
    cout<<"Enter the breadth:- ";
    cin>>breadth;

    float area = length*breadth;
    float perimeter = 2*(length+breadth);

    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"Perimeter is greater than area";
    }

    return 0;

}