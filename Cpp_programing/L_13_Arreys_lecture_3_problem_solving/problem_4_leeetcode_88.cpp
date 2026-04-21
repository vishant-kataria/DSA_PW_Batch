// Merge two sorted arrays .

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector <int> &v){
    int n = v.size();
    for (int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

void merge_vector(vector <int> &v1,vector <int> &v2,vector <int> &v3){
    int i = 0;
    int j = 0;
    // int k = 0;
    int n1 = v1.size();
    int n2 = v2.size();
    // int n3 = n1+n2;
    // v3.resize(n1+n2);
    int count = 0;
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            v3[count] = v1[i];
            count++;
            i++;
        }
        else if(v1[i]>v2[j]){
            v3[count] = v2[j];
            count++;
            j++;
        }
        else{
            v3[count] = v1[i];
            v3[count + 1] = v2[j];
            count = count +2;
            i++;
            j++;
        }
    }
    while(i<n1){
        v3[count] = v1[i];
        count++;
        i++;
    }
    while(j<n2){
        v3[count] = v2[j];
        count++;
        j++;
    }

}


int main(){
    int n1;
    cout<<"Enter the length of the first vector/array:- ";
    cin>>n1;
    int n2;
    cout<<"Enter the length of the second vector/array:- ";
    cin>>n2;
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;
    v3.resize(n1 + n2);  // Pre-allocate space for merged array
    // int n1 = v1.size();
    // int n2 = v2.size();
    for(int i = 0;i<n1;i++){
        int temp;
        cout<<"for vector 1 Enter element number "<<i+1<<":- ";
        cin>>temp;
        v1.push_back(temp);
    }
    for(int i = 0;i<n2;i++){
        int temp;
        cout<<"for vector 2 Enter element number "<<i+1<<":- ";
        cin>>temp;
        v2.push_back(temp);
    }

    merge_vector(v1,v2,v3);
    print_vector(v3);




}