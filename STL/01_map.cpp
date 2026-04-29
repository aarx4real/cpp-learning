#include <iostream>
#include <map>
using namespace std;

// A map in C++ is an associative container that
// stores unique keys with their corresponding values
// in sorted order.

int main(){

    map<string,int> m;

    // m[key]=value
    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=100;
    m["tablet"]=120;
    m["watch"]=40;

    // 1) m.insert(),m.emplace() -  adds a key-value pair to the map
    m.insert({"fridge",200});
    m.emplace("camera",30);

    // 2) m.count(key) - checks weather a key is presesnt in map
    //                   1 is present, otherwise 0
    cout << "Does Laptop exist(Y-1,N-0): " << m.count("laptop") << endl;
    cout << "Value of Laptop: " << m["laptop"] << endl;

    // 3) m.erase() - removes a key value pair
    m.erase("tv");

    // 4) m.find() - Returns an iterator to the element if
//                   found, otherwise returns m.end()
    if(m.find("tv")!=m.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    // 5) m.size() - returns the size of map

    // 6) m.empty() - returns 1 if empty, otherwise 0


    for(auto p : m){
        cout << p.first << "-" << p.second << endl; 
    }
    return 0;
}