#include <iostream>

int main(){
    std::string name;
    std::cout << "What's your full Name: ";
    std::getline(std::cin, name);

    int age;
    std::cout<< "How old are you? ";
    std::cin>> age;

    std::cout << "Hello " << name << "\n";

    std::cout << "You are " << age << " years old" << "\n";

    return 0;



}