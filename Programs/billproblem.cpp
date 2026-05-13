#include <iostream>
using namespace std;

static double amount=0;
const double tax=0.05;

double amt(double price,int quantity){
    for(int i=0; i<quantity; i++){
        amount = amount + (price + price*0.05);
    }
    return amount;
}
int main(){
    double price;
    int quantity;
    cout<<"Enter the price: "<<endl;
    cin>>price;
    cout<<"Enter the quantity: "<<endl;
    cin>>quantity;
    double total = amt(price,quantity);
    int finalamt=(int)total;
    cout<<"Total amount spent: "<<total<<endl;
    return 0;
}