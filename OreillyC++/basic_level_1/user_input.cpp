#include <iostream>

int main() {

    std::string username;

    std::cout << "What is your name? "; //without endl on \n, this will display on one line.
    std::cin >> username;
    std::cout << "Hello " << username << std::endl;

};