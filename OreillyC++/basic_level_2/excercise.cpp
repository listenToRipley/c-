#include <iostream> 
#include <vector>
#include <numeric>

using namespace std;

void user_info(string username, int age) {
    cout << "User: " << username << "\n" << "Age: " << age << endl;
}

int adding(int a, int b) {
    return a + b;
}

int average(vector<double> list) {
    return accumulate(list.begin(), list.end(), 0.0) / list.size();
}

double temp_conversion(double temp) {
    return (temp * 1.8) + 32;
}


int main() {
    string user;
    int age;
    int celsius;
    
    int a;
    int b;
    
    vector<double> num_list = {4.4,5.5,6.6,7.7};

    cout << "What is your name? " << endl;
    cin >> user;
    cout << "How old are you? " << endl;
    cin >> age;

    user_info(user, age);

    cout << "Provide a whole number ";
    cin >> a;
    cout << "Provide a second whole number ";
    cin >> b;

    int result = adding(a,b);
    cout << result << endl;
    
    int avg_list = average(num_list);

    cout << avg_list << endl;

    cout << "\n What is the current temperature in celsius? ";
    cin >> celsius;

    double fahrenheit = temp_conversion(celsius);

    cout << "The temperature in fahrenheit is " << fahrenheit << endl;
}