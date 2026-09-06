#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"--so here we will find the place of the alphabet you type--"<<endl;
    cout<<"enter the alphabet's value you want to find enter it in caps please:- ";
    cin>>a;
    int place = (int)a - 64;
    cout<<"so the place of "<<a<<" is "<<place;

    return 0;

}