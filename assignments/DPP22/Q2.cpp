#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    string arr[n];
    cout<<"Enter string array:- "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"sorted string array:- "<<endl;
    for(int i = 0;i<n-1;i++){
        bool bol = true;
        for(int j = 0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                bol = false;
            }
        }
        if(bol==true){
            break;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}