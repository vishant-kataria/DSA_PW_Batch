// Write a program to count the minimum number of notes in a given amount using the switch statement.

#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount:- ";
    cin>>amount;

    int no_of_500,no_of_200,no_of_100,no_of_50,no_of_20,no_of_10,no_of_5,no_of_2,no_of_1;
    no_of_500 = 0;
    no_of_200 = 0; 
    no_of_100 = 0; 
    no_of_50 = 0; 
    no_of_20 = 0; 
    no_of_10 = 0; 
    no_of_5 = 0; 
    no_of_2 = 0; 
    no_of_1 = 0; 

    int remaining_amount = 0;
    switch(amount>500){
        case 1:no_of_500 = amount/500;
        remaining_amount = amount%500;
        break;
    }
    switch(amount>200){
        case 1:no_of_200 = remaining_amount/200;
        remaining_amount = remaining_amount%200;
        break;
    }
    switch(amount>100){
        case 1:no_of_100 = remaining_amount/100;
        remaining_amount = remaining_amount%100;
        break;
    }
    switch(amount>50){
        case 1:no_of_50 = remaining_amount/50;
        remaining_amount = remaining_amount%50;
        break;
    }
    switch(amount>20){
        case 1:no_of_20 = remaining_amount/20;
        remaining_amount = remaining_amount%20;
        break;
    }
    switch(amount>10){
        case 1:no_of_10 = remaining_amount/10;
        remaining_amount = remaining_amount%10;
        break;
    }
    switch(amount>5){
        case 1:no_of_5 = remaining_amount/5;
        remaining_amount = remaining_amount%5;
        break;
    }
    switch(amount>2){
        case 1:no_of_2 = remaining_amount/2;
        remaining_amount = remaining_amount%2;
        break;
    }
    switch(amount>1){
        case 1:no_of_1 = remaining_amount/1;
        remaining_amount = remaining_amount%1;
        break;
    }

    cout<<"no of 500 is "<<no_of_500<<endl;
    cout<<"no of 200 is "<<no_of_200<<endl;
    cout<<"no of 100 is "<<no_of_100<<endl;
    cout<<"no of 50 is "<<no_of_50<<endl;
    cout<<"no of 20 is "<<no_of_20<<endl;
    cout<<"no of 10 is "<<no_of_10<<endl;
    cout<<"no of 5 is "<<no_of_5<<endl;
    cout<<"no of 2 is "<<no_of_2<<endl;
    cout<<"no of 1 is "<<no_of_1<<endl;

    return 0;
    

}