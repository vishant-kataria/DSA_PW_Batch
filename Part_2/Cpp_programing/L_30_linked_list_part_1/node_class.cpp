#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = nullptr;
    }
};
void print_reverse(Node* head){
    if(head==nullptr) return;
    print_reverse(head->next);
    cout<<head->val<<" ";
}
void print_rec(Node* head){
    if(head==nullptr){
        return;
    }
    cout<<head->val<<" ";
    print_rec(head->next);
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}
void insertAtEnd(Node* head,int val){
    Node* temp = new Node(val);
    while(head->next!=nullptr) head = head->next;
    head->next = temp;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    print(a);
    cout<<size(a)<<endl;
    print_rec(a);
     //iterative display is much better than recursive display time and space complexity wise

    cout<<endl;

    print_reverse(a);
    cout<<endl;

    insertAtEnd(a,70);
    print(a);



    
}