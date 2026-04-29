#include <iostream>
#include <stack>
using namespace std;

// A stack in C++ is an STL container adaptor that
// follows the Last In First Out (LIFO) principle and
// allows operations only at one end called the top.

int main(){
    stack<int> s;

    // 1) s.push(),s.emplace() - adds an elements to stack in the end
    s.push(1);
    s.push(2);
    s.push(3);

    // 2) s.top() - returns the last element entered
    cout << s.top() << endl;

    // 3) s.pop() - removes the last element from stack

    // 4) s.empty() - returns 1 if stack is empty
    //                returns 0 if stack is not empty

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    // 5) s.size - returns the size of the stack
    cout << s.size() << endl;

    // 6) s.swap - swaps the content of two stacks
    stack<int> s1;
    stack<int> s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    cout << endl;

    s2.swap(s1);

    cout << "After swap s2: ";
    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}