// 1
// 01
// 101
// 0101
// 10101


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int a = 1;
    int b = 0;
        for(int j = 1;j<=n;j++){
            if (j%2!=0){
                for (int k = 1; k <=j;k++){
                    if (k%2==0){
                        cout<<b;
                    }
                    else{
                        cout<<a;
                    }
                }
                cout<<endl;
            }
            else{
                for (int k = 1; k <=j;k++){
                    if (k%2!=0){
                        cout<<b;
                    }                    
                    else{
                        cout<<a;
                    }
                }
                cout<<endl;
        }
    }
}