#include <iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int arr[26];

    for(int i = 0;i<26;i++){
        arr[i] = 0;
    }

    for(int i = 0;str[i] != '\0';i++){
        char chr = str[i];
        
        int n = (int)chr - 97;

        arr[n]++;


    }
    int max = 0;
    for(int i = 0;i<26;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i = 0;i<26;i++){
        if(arr[i] == max){
            int a = i+97;
            cout<<(char)a<<" "<<arr[i]<<endl;
        }
    }
}