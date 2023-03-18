#include <iostream> 

class User {
    public:
    std::string name;
    int age; 
    bool isLoggedIn;

    User(std::string n, int a) {
        //this is your constructor. It has the same name as the class. Think of this as a way to initialize your class.
        name = n;
        age = a;
        isLoggedIn = true;
    }

    void changeLoginStatus() {
        isLoggedIn = !isLoggedIn;
    };
};

int main() {
    User user = User("Natalie", 34); 
    User user2 = User("Gruff", 7);

    std::cout << user2.name << "\n";
    std::cout << user2.isLoggedIn << "\n";

    user2.changeLoginStatus();

    user.age = 35;
};