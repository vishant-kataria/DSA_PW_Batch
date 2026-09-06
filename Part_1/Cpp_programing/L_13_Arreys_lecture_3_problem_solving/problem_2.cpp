// Move all negative numbers to beginning and positive to end with constant extra space.

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector <int> &v){
    int n = v.size();
    for (int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

void sort_1(vector <int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;

    while(i<j){
        if(v[i]<0){
            i++;
        }
        else if(v[j]>=0){
            j--;
        }
        else if(v[i] >0 && v[j] <0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        // else if(v[i]==0 && v[j]<0){
        //     int temp = v[i];
        //     v[i] = v[j];
        //     v[j] = temp;
        //     i++;
        // }
        // else if(v[i]>0 && v[j]==0){
        //     int temp = v[i];
        //     v[i] = v[j];
        //     v[j] = temp;
        //     j--;
        // }
        // else if(v[i]==0 && v[j] == 0){
        //     int temp = v[j];
        //     v[j] = v[j-1];
        //     v[j-1] = temp;
        // }
    }
}

int main(){
    int n;
    cout<<"Enter the length of vector/array:- ";
    cin>>n;
    vector <int> v;
    for(int i = 0;i<n;i++){
        int temp;
        cout<<"Enter element number "<<i+1<<":- ";
        cin>>temp;
        v.push_back(temp);
    }

    sort_1(v);
    print_vector(v);



}