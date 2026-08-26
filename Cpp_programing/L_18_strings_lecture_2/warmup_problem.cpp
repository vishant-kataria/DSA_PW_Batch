#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout<<"Enter a string here:- ";
    cin>>str;
    int count = 0;
    for(int i = 0;str[i]!= '\0';i++){
        if(i==0){
            if(str[i] != str[i+1]){
                count++;
            }
        }
        else if(str[i+1] == '\0'){
            if(str[i] != str[i-1]){
                count++;
            }
        }
        else{
            if(str[i] != str[i+1] && str[i] != str[i-1]){
                count++;
            }
        }
    }

    cout<<"No of times the neighbouring characters are diff from each other are:- ";
    cout<<count;
}