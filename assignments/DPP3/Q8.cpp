//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter value of x1:- ";
    cin>>x1;
    cout<<"Enter value of y1:- ";
    cin>>y1;
    cout<<"Enter value of x2:- ";
    cin>>x2;
    cout<<"Enter value of y2:- ";
    cin>>y2;
    cout<<"Enter value of x3:- ";
    cin>>x3;
    cout<<"Enter value of y3:- ";
    cin>>y3;

    if (((y2-y1)/(x2-x1)) == ((y3-y2)/(x3-x2))){
        cout<<"They make a straight line";
    }
    else {
        cout<<"They dont make a straight line";
    }

    return 0;
}