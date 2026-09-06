// Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year to check weather it is leap or not:- ";
    cin>>year;

    if (year%4==0){
        if (year%400==0){
            cout<<"Leap year";
        }
        else if (year%100==0){
            cout<<"Not leap year";
        }
        else{
            cout<<"Leap year";
        }
    }
    else{
        cout<<"Not leap year";
    }

    return 0;

}