// for n = 4
// 1234567
// 123 567
// 12   67
// 1     7

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int no_of_space = 1;
    int starting_numbers = n-1;
    int ending_numbers = n+1;

    for(int i = 1;i<=n;i++){
        if (i==1){
            for(int j = 1;j<=((2*n)-1);j++){
                cout<<j;
            }
            cout<<endl;
            continue;
        }

        for(int k = 1;k<=starting_numbers;k++){
            cout<<k;
        }
        for(int o = 1;o<=no_of_space;o++){
            cout<<" ";
        }
        for(int k = ending_numbers;k<=((2*n)-1);k++){
            cout<<k;
        }
        cout<<endl;
        no_of_space +=2;
        starting_numbers--;
        ending_numbers++;

    }
}