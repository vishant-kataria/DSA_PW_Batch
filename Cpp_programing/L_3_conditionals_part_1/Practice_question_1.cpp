//given an integer print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"want to see a magic"<<endl<<"i will give you the absolute value of any number you type so enter the number:- ";
    cin>>a;
    if (a>=0){
        cout<<a;
    }
    else{
        cout<<-a;
    }

    return 0;
}


