#include <iostream>
using namespace std;
class Node{ //user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList{ //user defined data structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = nullptr;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx,int val){
        Node* t = new Node(val);
        if(idx==0){
            insertAtHead(val);
            size++;
            return;
        }
        if(idx==size){
            insertAtTail(val);
            size++;
            return;
        }
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
            size++;
            return;
        }
        Node* temp = head;
        for(int i = 0;i<idx-1;i++){
            temp = temp->next;
        }

        t->next = temp->next;
        temp->next = t;
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int getAt(int idx){
        if(idx<0 || idx>=size) {
            cout<<"Invalid index!!"<<endl;
            return -1;
        }
        Node* temp = head;
        for(int i = 0;i<idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    void deleteAtHead(){
        if(size==1){
            head = tail = nullptr;
            size--;
            return;
        }
        if(size==0){
            cout<<"Invalid";
            return;
        }

        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if (size==1){
            head = tail = nullptr;
            size--;
            return;
        }
        if(size==0){
            cout<<"Invalid";
            return;
        }

        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = nullptr;
        tail = temp;
        size--;
    }
    void deleteAt(int idx){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        if(idx==0){
            deleteAtHead();
            return;
        }
        if(idx==size-1){
            deleteAtTail();
            return;
        }
        if(idx<0 || idx>=size){
            cout<<"Invalid";
            return;
        }
        Node* temp = head;
        for(int i = 0;i<idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
    }

    
};
int main(){
    LinkedList l1;
    l1.insertAtTail(10);
    l1.insertAtTail(20);
    l1.insertAtTail(30);
    l1.insertAtHead(5);
    l1.insertAtHead(2);
    l1.display();
    l1.insertAt(3,3);
    l1.display();

    // cout<<l1.getAt(0);
    // l1.deleteAtHead();
    // l1.deleteAtTail();
    l1.deleteAt(4);
    l1.display();
    // cout<<l1.size;

}