// // for n = 4
// // ABCDEFG
// // ABC EFG
// // AB   FG
// // A     G



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:- ";
//     cin>>n;
//     int no_of_spaces = 1;
//     int no_of_alphabet = n-1;

//     for(int i = 1;i<=n;i++){
//         if (i==1){
//             for(int j = 1;j<=2*n-1;j++){
//                 cout<<(char)j;
//             }
//             cout<<endl;
//         }
//         else{    
//             int temp = 65;
//             for(int k = 1;k<=no_of_alphabet;k++){
//                 cout<<(char)temp;
//                 temp++;
//             }
//             no_of_alphabet--;
//             for(int y = 1;y<=no_of_spaces;y++){
//                 cout<<" ";
//             }
//             no_of_spaces += 2;
//             int temp_2 = 65 + (2*n - 1) - no_of_alphabet + 1;
//             for(int o = 1;o<=no_of_alphabet;o++){
//                 cout<<(char)temp_2;
//                 temp_2++;
//             }
//             cout<<endl;
//         }

//     }
// }

// will do it later+


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    int front_line = n-1;
    int end_line = n+1;

    for (int i = 0;i<n;i++ ){
        if (i == 0){
            for(int j = 1;j<=2*n-1;j++){
                int temp = j+64;
                cout<<char(temp);
            }
        }
        else{
            for(int j = 1;j<=front_line;j++){
                int temp = j+64;
                cout<<char(temp);
            }
            front_line--;
            for(int k = 1;k<=2*i-1;k++){
                cout<<" ";
            }
            for(int o = end_line;o<=2*n-1;o++){
                int temp = o+64;
                cout<<char(temp);
            }
            end_line++;
        }
        cout<<endl;
    }
    return 0;
}