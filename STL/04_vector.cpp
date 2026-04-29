#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // VECTOR ITERATORS

    // vec.begin() - points to the first element of the vector
    // vec.end() - points to one position after the last element of the vector

    vector<int> vec={1,2,3,4,5};    
    /* cout << *vec.begin() << endl;
    cout << *vec.end() << endl; */

    // vec.rbegin() - points to the last element of the vector
    // vec.rend() - points to the position before the first element
    
    vector<int>::iterator it;
    for(it=vec.begin(); it!=vec.end(); it++){   //forward 
        cout << *(it) << " ";
    }

    cout << '\n';

    vector<int>::reverse_iterator rit;
    for(rit=vec.rbegin(); rit!=vec.rend(); rit++){    //backward
        cout << *rit << " ";
    }

    // instead of initializing the iterator we can use auto keyword
    return 0;
}