// WAP to find the largest three elements in the array.


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array:- ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter element number "<<i+1<<":- ";
        cin>>arr[i];
    }

    //i will do bubble short

    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Top 3 numbers are:- "<<arr[2]<<","<<arr[1]<<","<<arr[0]<<".";

}



//soln in notes:-


// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5]={10,3,1,21,3};
//     int max, max2, max3;
//     max3 = max = max2 = arr[0];
//     for(int i = 0; i < 5; i++){
//         if (arr[i] > max){
//             max3 = max2;
//             max2 = max;
//             max = arr[i];
//         }
//         else if (arr[i] > max2){
//             max3 = max2;
//             max2 = arr[i];
//         }
//         else if (arr[i] > max3)
//             max3 = arr[i];
//     }
//     cout<<endl<<"Three largest elements of the array are "<<max<<", "<<max2<<","<<max3;
//     return 0;
// }