#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    string str;
    for(int i = 0;i<n;i++){
        char ch = s[i];

        int temp = (int)ch;
        // cout<<temp;
        if(temp>=88){
            str.push_back(ch);
        }
    }

    int n1 = str.size();

    for(int i = 0;i<n1-1;i++){
        bool bol = true;
        for(int j = 0;j<n1-1-i;j++){
            char ch = str[j];
            char ch1 = str[j+1];

            int temp = (int)ch;
            int temp1 = (int)ch1;
            if(temp>temp1){
                swap(str[j],str[j+1]);
                bol = false;
            }
        }
        if(bol == true){
            break;
        }
    }
    reverse(str.begin(),str.end());
    cout<<str;



}