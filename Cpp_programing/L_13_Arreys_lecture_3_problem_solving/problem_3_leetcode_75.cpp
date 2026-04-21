// Sort the array of 0’s , 1’s and 2’s .

#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector <int> &v){
    int n = v.size();
    for (int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
//three pointer algorithm (dutch flag algo)
void short_1(vector <int> &v){
    int n = v.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(v[mid]==2){
            int temp = v[high];
            v[high] = v[mid];
            v[mid] = temp;
            high--;
        }
        else if(v[mid]==0){
            int temp = v[low];
            v[low] = v[mid];
            v[mid] = temp;
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
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

    short_1(v);
    print_vector(v);


}