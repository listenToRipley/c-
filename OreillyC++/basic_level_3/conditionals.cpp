#include <iostream>

using namespace std;

int main() {
    cout << boolalpha; //provides true or false instead of 1 and 0
    double temp = 25.0;

    // cout << true <<endl;
    // cout << false <<endl;

    // cout << (1 == 1) << endl;
    // cout << (1 != 1) << endl;
    // cout << (1 < 1) << endl;
    // cout << (1 <= 1) << endl;
    // cout << (1 > 1) << endl;
    // cout << (1.5 >= 1) << endl;
    // cout << ("hello" == "Hello") << endl;

    // cout << ((1 == 1) || (3 == 4)) << endl;
    // cout << ((1 == 1) && (3 == 4)) << endl;
    bool safeTemp = ((temp >= 20.0) && (temp < 30.0));

    cout << safeTemp << endl;

}