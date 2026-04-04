// for n = 5
// *       *
//  *     *
//   *   *
//    * *
//     *



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int helper = n;

    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j = 2*helper-3;j>0;j--){
            cout<<" ";
        }
        helper --;
        if(i<n-1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}