#include <iostream>
#include <vector>
#include <numeric>

int main() {

    //exercise 1
    std::string name;
    int age; 

    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello " << name << " So you are " << age << " years old." << std::endl;

    //exercise 2
    int a;
    int b;

    std::cout << "Give me a whole number. ";
    std::cin >> a;

    std::cout << "Give me another whole number. ";
    std::cin >> b; 

    std::cout << a << " + " << b << " = " << a+b << std::endl;

    //exercise 3
    std::vector<double> num_list = {4.4,5.5,6.6,7.7};

    double result = std::accumulate(num_list.begin(), num_list.end(), 0.0) / num_list.size();

    std::cout << "The average of the num_list : " << result;

}