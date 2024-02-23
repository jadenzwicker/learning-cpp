// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string user_name;
    std::cout << "Enter your name: ";
    std::cin >> user_name;
    std::cout << "Your name is: " << user_name << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
