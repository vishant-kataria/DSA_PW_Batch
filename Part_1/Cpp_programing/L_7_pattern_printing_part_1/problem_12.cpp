// ___1
// __12
// _123
// 1234

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        int a = 1;
        for(int j = 1;j<=n;j++){
            if(i+j>=n+1){
                cout<<a;
                a += 1;
            }
            else{
                cout<<"_";
            }

        }
        cout<<endl;
    }
}
