// Sort the array of 0’s and 1’s .
//without using predefined sort function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector <int> &v){
    int n = v.size();
    for (int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

//method 1
void sort_1(vector <int> &v){
    int n = v.size();
    int no_of_zero = 0;
    int no_of_one = 0;
    for(int i = 0;i<n;i++){
        if(v[i] == 0) no_of_zero += 1;
        else no_of_one += 1;
    }



    for(int i = 0;i<no_of_zero;i++){
        v[i] = 0;
    }
    for(int i = no_of_zero;i<n;i++){
        v[i] = 1;
    }

    //another method to put 0 and 1 in vector
    // for(int i = 0;i<n;i++){
    //     if(i<no_of_zero) v[i] = 0;
    //     else v[i] = 1;
    // }

}

//method 2
void sort_2(vector <int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]==0){
            i++;
            continue;
        }
        else if(v[j] == 1){
            j--;
            continue;
        }
        else{
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
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

    // for (int i = 0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    

    // sort(v.begin(),v.end());
    

    
    // sort_1(v);
    sort_2(v);
    print_vector(v);




}