// *******
// *** ***
// **   **
// *     *

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int no_of_space = 1;
    int no_of_stars = n-1;

    for(int i = 1;i<=n;i++){
        if (i==1){
            for(int j = 1;j<=((2*n)-1);j++){
                cout<<"*";
            }
            cout<<endl;
            continue;
        }

        for(int k = 1;k<=no_of_stars;k++){
            cout<<"*";
        }
        for(int o = 1;o<=no_of_space;o++){
            cout<<" ";
        }
        for(int k = 1;k<=no_of_stars;k++){
            cout<<"*";
        }
        cout<<endl;
        no_of_space +=2;
        no_of_stars--;

    }
}