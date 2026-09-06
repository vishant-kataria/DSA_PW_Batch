// copy content of 1 array into an another array in reverse order 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"Enter the length of array:- ";
    cin>>n;

    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter value no "<<i+1<<":- ";
        cin>>temp;
        v.push_back(temp);
    }
    
    vector<int> v2(v.size());

    for(int i = 0;i<n;i++){
        v2[n-i-1] = v[i];

    }
    for(int i = 0;i<n;i++){
        cout<<v2[i];
    }


}