#include <iostream>

int main() {
    double temp_list[4] = {32.5, 105.0, 37.7, -1.5};

    std::cout << temp_list[3] << std::endl; 

    temp_list[3] = 23.5;

    std::cout << temp_list[3] << std::endl; 
}