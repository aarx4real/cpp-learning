#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// A deque (double-ended queue) in C++ is an STL
// container that allows fast insertion and deletion at 
// both the front and the back.

int main(){
    deque<int> d= {1,2,3,4,5};
    for(int val : d){
        cout << val << " ";
    }

// Similar functions - size,erase,clear,begin,end,rebegin,rend,insert,front,back

return 0;
}
