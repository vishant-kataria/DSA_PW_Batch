#include <iostream>
#include <vector>
using namespace std;


void reverse_part_array(vector <int> &v,int i,int j){
    while(i<j){
        int temp = v[j];
        v[j] =   v[i];
        v[i] =   temp;
        i++;
        j--;
    }
}

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

    reverse_part_array(v,1,3);
    for(int i = 0;i<n;i++){
        cout<<v[i];
    }


}