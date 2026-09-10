#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int marks;

    Student(string name,int marks){
        this->name = name;
        this->marks = marks;
    }
};

int main(){
    // Student s;
    // s.marks = 92;
    // s.name = "vishant";

    // Student* ptr = &s;
    // // ptr++;
    // cout<<(*ptr).name;

    Student* s = new Student("vishant",92);

    cout<<s->name;
}