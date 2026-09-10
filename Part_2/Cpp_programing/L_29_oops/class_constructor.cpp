#include <iostream>
using namespace std;

class students{
    public:
    string name;
    int roll_no;
    float cgpa;
    students(){}//default constructor
    students(string n,int r,float c){//parameterised constructor 
        name = n;
        roll_no = r;
        cgpa = c;
    }

};
void print(students c){
    cout<<c.name<<endl;
    cout<<c.roll_no<<endl;
    cout<<c.cgpa<<endl;
}

int main(){
    students s1("Vishant",17,9.58);
    students s2;//we can initilize this s2 only because of default constructor
    s2.name = "utkarsh";
    s2.roll_no = 55;
    s2.cgpa = 5.1;
    print(s1);
    print(s2);

}