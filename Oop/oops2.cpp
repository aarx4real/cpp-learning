#include <iostream>
#include <string>
using namespace std;

class Teacher { 
    private:
        double salary;    
                                     // class
    public:                          // access specifiers  
        string name;                 // attributes/ properties   
        string dept;                 
        string subject;                 
        
        void teach(string name){    // member function
            cout << name << " is teaching" << endl;
        }
        
        // setter
        void setsalary(double newsalary){
            salary=newsalary;
        }

        //getter
        void getsalary() {
            cout << salary;
        } 
};

int main() {
    Teacher t1;                      //object          
    t1.name="Aarush";
    t1.dept="Cse";
    t1.subject="Computer Science";
    t1.setsalary(25000);

    cout << t1.name << '\n';
    t1.teach(t1.name);
    t1.getsalary();
    return 0;
}