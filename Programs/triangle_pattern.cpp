#include <iostream>

int main() {
    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            std::cout << ' ';
        }
        for(int z=0;z<2*i+1;z++){
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}