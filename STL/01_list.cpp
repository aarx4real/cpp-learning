#include <iostream>
#include <vector>
#include <list>
using namespace std;


// A list in C++ is a container in the STL that stores
// elements in a doubly linked list, where each element
// is connected to the next and previous elements using pointers.

int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout << val << ' ';
    }

    // Similar functions used in vectors like size,erase,clear,begin,end,rbeing,rend
    // insert,front,back
    
    return 0;
}