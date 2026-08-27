#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str;
    cin>>str;

    // int n = stoi(str);
    int max = 0;
    for(int i = 0;str[i]!='\0';i++){
        char ch = str[i];
        int n = (int)ch-48;
        if(n>max){
            max = n;
        }
    }
    int max_2 = 0;
    for(int i = 0;str[i]!='\0';i++){
        char ch = str[i];
        int n = (int)ch-48;
        if(n>max_2 && n!=max){
            max_2 = n;
        }
    }

    cout<<max_2;


}