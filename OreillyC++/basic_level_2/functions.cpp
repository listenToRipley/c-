#include <iostream>

int c; //global scope

void say_hello(std::string username, int user_age) {
    c = 12;
    std::cout << "Hello " << username << ", you are " << user_age << " years old" << std::endl;
}

int triple_num(int num){
    return 3 * num;
}

int print_triple_num(int number){
    int a;
    c = 21;
    std::cout << triple_num(number) << std::endl;
}

int main(){
    int b;
    // a = 2; //poor scope. Will not access a from print_triple_num. If a had a global scope, this would be fine.
    c = 7;
    say_hello("Natalie", 34);
    say_hello("Gruff", 7);
    say_hello("BB", 1.5);

    // int result = triple_num(3);

    // std::cout << result << std::endl;

    print_triple_num(3);

    {
        b=5; //since this block lives inside of main, we can use b.
    }
};