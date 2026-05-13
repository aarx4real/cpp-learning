#include <iostream>
using namespace std;

class SmartSecurity{
private:
    string doorStatus;
    string windowStatus;

public:
    SmartSecurity(string doorStatus, string windowStatus){
        this->doorStatus=doorStatus;
        this->windowStatus=windowStatus;
    }

    void lockAll(){
        cout<<"Locking everything." << endl;
        doorStatus="locked";
        windowStatus="locked";
    }
    void unlockAll(){
        cout<<"Unlocking everything." << endl; 
        doorStatus="unlocked";
        windowStatus="unlocked";
    }
    void displayStatus(){
        cout<<"Door status: "<<doorStatus<<endl;
        cout<<"Window status: "<<windowStatus<<endl;
    }

};

int main(){
    SmartSecurity ss1("unlocked","locked");
    ss1.displayStatus();
    ss1.unlockAll();
    ss1.displayStatus();
    ss1.lockAll();
    ss1.displayStatus();
    return 0;
}