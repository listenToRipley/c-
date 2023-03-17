#include <iostream>

namespace abc {
    int four_fold(int number) {
        return number * 4; 
    };

    void cout() {

    };
};

using namespace std;
// using namespace abc;

int c; //global scope

void say_hello(string username, int user_age) {
    c = 12;
    cout << "Hello " << username << ", you are " << user_age << " years old" << endl;
}

int triple_num(int num){
    return 3 * num;
}

int print_triple_num(int number){
    int a;
    c = 21;
    cout << triple_num(number) << endl;
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
    };

    abc::four_fold(6);
    abc::cout();
};