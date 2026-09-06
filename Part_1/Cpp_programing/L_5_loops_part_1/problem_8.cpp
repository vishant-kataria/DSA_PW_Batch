// Print all alphabets (uppercase) with their ASCII values.

#include <iostream>
using namespace std;
int main(){
    for(char i = 'A';i<='Z';i++){
        cout<<i<<" "<<int(i)<<endl;
    }

    return 0;
}