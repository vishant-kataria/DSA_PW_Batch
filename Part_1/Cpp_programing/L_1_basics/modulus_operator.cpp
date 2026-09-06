#include <iostream>
using namespace std;
int main(){
    //when a>= b the a%b gives remainder as always
    int a = 5;
    int b = 2;
    cout<<a%b<<endl;
    //when a<b a%b return a as a becomes the remainder
    a = 2;
    b = 40;
    cout<<a%b<<endl;
    //a%b == a%(-b) but (-a)%b == (-a)%(-b) gives negative number
    a = 11;
    b = 3;
    cout<<a%b<<endl;
    cout<<a%(-b)<<endl;
    cout<<(-a)%b<<endl;
    cout<<(-a)%(-b)<<endl;
    return 0;

}