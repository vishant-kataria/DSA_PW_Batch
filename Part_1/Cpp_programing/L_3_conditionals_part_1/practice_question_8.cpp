// Take input marks of a student and print the Grade according to marks:
// 1) 91-100 Excellent
// 2) 81-90 Very Good
// 3) 71-80 Good
// 4) 61-70 Can do better
// 5) 51-60 Average
// 6) 40-50 Below Average
// 7) <40 Fail

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks of the student to get his grades:- ";
    cin>>marks;

    if(marks>90 && marks<101){
        cout<<"Grade:- Excellent";
    }
    else if(marks>80 && marks<91){
        cout<<"Grade:- very Good";
    }
    else if(marks>70 && marks<81){
        cout<<"Grade:- Good";
    }
    else if(marks>60 && marks<71){
        cout<<"Grade:- can do better";
    }
    else if(marks>50 && marks<61){
        cout<<"Grade:- Average";
    }
    else if(marks>40 && marks<51){
        cout<<"Grade:- Below Average";
    }
    else if(marks<40 && marks>=0){
        cout<<"Grade:- Fail";
    }
    else{
        cout<<"Enter valid marks";
    }

    return 0;

}