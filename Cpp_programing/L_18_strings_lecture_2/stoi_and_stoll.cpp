//stoi = string to int 
//stoll = string to long long

#include <iostream>
#include <String>

using namespace std;

int main(){
    string str;
    cin>>str;

    int n = stoi(str);
    long long x = stoll(str);

    cout<<n+1<<endl;
    cout<<x+1<<endl;
}