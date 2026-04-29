#include <iostream>
#include <vector>
using namespace std;

int main(){

    //erase() - used to remove a particular element in a vector
    //erase(start,end) - start value is included but end value is not included 

    vector<int> vector1 = {1,2,3,4,5,6,7};

    //vector1.erase(vector1.begin());
    //vector1.erase(vector1.begin()+4); 

    vector1.erase(vector1.begin()+2,vector1.begin()+5);

    /*for(int i : vector1){
        cout << i << " ";
    }*/

    vector<int> vector2={1,2,3,4,5};

    //vector2.insert(position,value) - used to insert element at a particular position
    //                                 position is initialized by vector2.begin() where the 
    //                                 value will be inserted

    vector2.insert(vector2.begin()+2,100);

    for(int i : vector2){
        cout << i << " ";
    }

    // vector.clear() - clears the vectors, size becomes zero
    //                  but capacaity remains the same as initialy created

    // vector.empty() - returns 1 is the vector is empty
    //                  return 0 is the vector contains any element

    return 0;
}
