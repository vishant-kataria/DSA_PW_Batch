//If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main(){
    float cost_price,selling_price;
    cout<<"Enter the cost price:- ";
    cin>>cost_price;
    cout<<"Enter the selling price:- ";
    cin>>selling_price;

    if(cost_price>selling_price){
        cout<<"you incurred loss"<<endl;
        float loss = cost_price-selling_price;
        cout<<"the amount of loss is "<<loss;
    }
    else if(cost_price == selling_price){
        cout<<"no profit no loss";
    }
    else{
        cout<<"you made profit"<<endl;
        float profit = selling_price-cost_price;
        cout<<"the amount of profit is "<<profit;
    }

    return 0;
}