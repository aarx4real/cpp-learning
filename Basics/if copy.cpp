#include <iostream>

int main() {                                            //if - statements

    int age;                                            //  if(){
                                                        //  }
    std::cout << "Enter your age: " << '\n';            //  else if(){  #multiple else if() - statements can be used
    std::cin >> age;                                    //  }
                                                        //  else{
    if(age>=18){                                        //  }
        std::cout << "You are eligible" << '\n';
    }
    else if(age<=0){
        std::cout << "You arent born yet" << '\n';
    }
    else{
        std::cout << "You are not eligible" << '\n';
    }

    return 0;
}