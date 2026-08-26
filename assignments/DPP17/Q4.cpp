#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin>>s;
    string s_r = s;

    int n = s.length()/2;
    reverse(s_r.begin()+n,s_r.end());

    cout<<s_r;
}