// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

#include <iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter value of x:- ";
    cin>>x;
    cout<<"Enter value of y:- ";
    cin>>y;

    if (x==0 && y==0){
        cout<<"The point lies on origin";
    }
    else if (x==0){
        cout<<"The point lies on y axis";
    }
    else if(y==0){
        cout<<"The point lies on x axis";
    }
    else{
        cout<<"The point neither lies on x or y axis nor on origin";
    }

    return 0;
}