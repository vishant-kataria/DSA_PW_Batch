//Find the last occurance of x in an arrey/vector

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the length of vector:- ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter value no "<<i+1<<":- ";
        cin>>temp;
        v.push_back(temp);
    }
    // cout<<v.size();
    int index;
    int number_need_to_check;
    cout<<"Enter the no whose last index you want to find:- ";
    cin>>number_need_to_check;
    int bool_1 = false;
    for(int i = 0;i<v.size();i++){
        if(v[i] == number_need_to_check){
            index = i;
            bool_1 = true;
        }
    }

    if(bool_1 == true){
        cout<<"The last index and position respectively of no "<<number_need_to_check<<" is "<<index<<" and "<<index+1;
    }
    else{
        cout<<"number not present in vector";
    }
    return 0;

    


}