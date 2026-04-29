#include <iostream>
using namespace std;

int main(){
    int qty,amt;
    int price=10;
    cout<<"Enter the quantity of item"<<endl;
    cin>>qty;
    cout<<"Enter the payment amount of item"<<endl;
    cin>>amt;

    try{
        if(qty<=0){
            throw "Negative quantitiy";
        }
        if(amt<=0){
            throw 1;
        }
        if(amt<qty*10){
            throw 2;
        }
    }

    catch(const char *msg){
        cout << msg;
    }

    catch(int x){
        if(x==1){
            cout << "No payment";
        }
        if(x==2){
            cout << "Less payment";
        }
    }
    return 0;
}