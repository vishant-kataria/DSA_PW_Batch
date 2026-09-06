#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string str;
    cin>>str;

    int ans = 0;
    int l = 0;
    for(int i = 0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            l++;
        }
        else{
            ans += l*(l+1)/2;
            l = 0;

        }
    }
    ans += l*(l+1)/2;

    cout<<ans;

}