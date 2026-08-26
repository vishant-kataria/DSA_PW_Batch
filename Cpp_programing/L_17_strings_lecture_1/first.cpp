#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    char str[n];
    cout<<"Enter the string of length "<<n<<" here:- ";
    // for(int i = 0;i<n;i++){

    //     cin>>str[i];
    // }
    cin>>str;
    cout<<str<<endl;

    for(int i = 0;i<n;i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            cout<<str[i];
        }
    }
}