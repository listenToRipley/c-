#include <iostream> //allows access to string functions like std::cout

int a; // still valid it declares the variable, but there is no value assigned to it. You can change the value at any point as long as the type matches.

int main () {

    int number = 3;
    int b = a + 2;

    double temp = 98.8;

    const double maxBodyTemp = 109.4;
    // maxBodyTemp = maxBodyTemp + temp;

    bool is_alive = true; //defaults as 0 = false if not assigned a value

    std::string name = "Natalie";

    std::cout << "Hello World" << std::endl; //endl = endline
    std::cout << "test abc" << std::endl;

    std::cout << number + 1 << std::endl;
    std::cout << number + 2 << std::endl;
    std::cout << number + 3 << std::endl;

    a = 2;
    std::cout << b << std::endl; //the order in which the variables are declared and called will effect the output of your code.

    int c = a + b;

    std::cout << c << std::endl;

    std::cout << "Hello my name is " << name << std::endl;

    std::cout << temp << std::endl;

    std::cout << is_alive << std::endl; // the output will be either 1 = true or 0 = false

    return 0;
}