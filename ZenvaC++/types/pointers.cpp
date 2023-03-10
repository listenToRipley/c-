#include <iostream>

int main() {
    int age = 24; //stored a specific location in memory. say 0X00 
    //pick up on the value as it changes.
    int ageReference = age; //this reference won't change based on the original location 

    age = 21;

    int * agePtr = &age; // how you set up the pointer and get the address "0X00"

    //dereferencing to get the value of the pointer.
    int ageVal = * agePtr;

    std::cout << age << "\n";
    std::cout << ageReference << "\n";
    std::cout << agePtr << "\n";

};