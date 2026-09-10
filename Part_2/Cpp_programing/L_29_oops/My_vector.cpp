#include <iostream>
using namespace std;
class vector{
public:
    int size;
    int capacity;
    int* arr;

    vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){
        if(size==capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i =0;i<size;i++){
                arr2[i] = arr[i];
            }

            arr = arr2;
        }
        arr[size++] = ele;
    }

    void print(){
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

    int get(int index){
        if(index>=size||index<0) return -1;
        return arr[index];
    }

    void remove(){
        size--;
    }
};

int main(){
    vector v1;
    v1.add(10);
    v1.print();
    v1.add(20);
    v1.print();
    v1.add(30);
    v1.print();
    v1.add(40);
    v1.print();
    v1.remove();
    v1.print();
    v1.remove();
    v1.print();
;    
}