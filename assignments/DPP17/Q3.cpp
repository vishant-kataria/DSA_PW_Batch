#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    // string s_r = s;
    // reverse(s_r.begin(),s_r.end());
    // if(s == s_r){
    //     cout<<"Yes the string is palindrom";
    // }
    // else{
    //     cout<<"The string isn't palindrom";
    // }
    string s_r;

    for(int i = s.length()-1;i>=0;i--){
         s_r.push_back(s[i]);
    }
    cout<<s_r<<endl;

    if(s == s_r){
        cout<<"Yes the string is palindrom";
    }
    else{
        cout<<"The string isn't palindrom";
    }

}