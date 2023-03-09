#include <iostream>

int main() {
    int age = 30;
    std::string firstName = "Natalie";
    std::string lastName = "Kendrick";

    int newAge = age + 1;
    age = age + 1;
    age += 1;

    std::string fullName = firstName + lastName; //concatenation 

    bool oldEnough = age >=  25;
    bool sameName = firstName == lastName;

    bool bothTrue = oldEnough && sameName;
    bool eitherTrue = oldEnough || sameName; 
};