#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin>>str;
    string str_ = str;
    reverse(str_.begin(),str_.end());

    cout<<str+str_;
}