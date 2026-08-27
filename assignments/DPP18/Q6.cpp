#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    stringstream ss (str);
    vector <string> v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int n = v.size();

    cout<<v[n-1];
    
}