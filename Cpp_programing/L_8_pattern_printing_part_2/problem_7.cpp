// 1111
// 1222
// 1233
// 1234


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    for (int i = 1;i<=n;i++){
        int a = 1;
        
        for(int j = 1;j<=n;j++){
            cout<<a;
            // int o = i;
            if(i>j){
                a++;
            }
            
        }
        cout<<endl;
        

    }
}