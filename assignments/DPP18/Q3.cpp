#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}

int permutation(int n,int r){
    return factorial(n)/factorial(n-r);
}

int main(){
    string str;
    cin>>str;
    int count = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    int total_count = 0;
    for(int i = 1;i<=count;i++){
        int temp = permutation(count,i);
        total_count += temp;
    }
    cout<<total_count;
}