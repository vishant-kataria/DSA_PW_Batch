//WAP for finding the volume of the cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main(){
    float radius, height;
    cout<<"the program will find the volume of cylinder from your given input"<<endl;
    cout<<"Enter the radius:- ";
    cin>>radius;
    cout<<"Enter the height:- ";
    cin>>height;
    float pi = 3.14;
    float volume = pi * radius * radius * height;
    
    cout<<"The volume is "<<volume;
    return 0;

}