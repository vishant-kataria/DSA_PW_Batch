#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    getline(cin,str);

    stringstream ss (str);

    vector <string> words;
    string temp;
    while(ss>>temp){
        words.push_back(temp);
    }

    sort(words.begin(),words.end());

    int max = 0;
    int count = 1;
    int n = words.size();
    for(int i = 0;i<n;i++){

        if(words[i] == words[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count>max){
            max = count;
        }
    }
    for(int i = 0;i<n;i++){

        if(words[i] == words[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count==max){
            cout<<words[i]<<" "<<count<<endl;
        }
    }



}