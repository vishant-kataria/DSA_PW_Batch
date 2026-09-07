#include <iostream>
using namespace std;
void fun(){
    cout<<"Hello Vishant"<<endl;
    fun();
}
int main(){
    fun();
}