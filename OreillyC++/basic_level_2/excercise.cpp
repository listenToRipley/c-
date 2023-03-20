#include <iostream> 
#include <vector>
#include <numeric>

using namespace std;

void user_info(string username, int age) {
    cout << "Hello " << username << "\n" << ", you are " << age << "years old." << endl;
}

void greetUser() {
    string user;
    int age;

    cout << "What is your name? " << endl;
    cin >> user;
    cout << "How old are you? " << endl;
    cin >> age;

    user_info(user, age);

}

int adding(int a, int b) {
    return a + b;
}

void addResults() {
    int a;
    int b;


    cout << "Provide a whole number ";
    cin >> a;
    cout << "Provide a second whole number ";
    cin >> b;

    int result = adding(a,b);
    cout << result << endl;
}

int average(vector<double> list) {
    return accumulate(list.begin(), list.end(), 0.0) / list.size();
}

void averageResult(){
    vector<double> temp_list = {4.4,5.5,6.6,7.7};
    
    int avg_list = average(temp_list);

    cout << avg_list << endl;
}

double celsius_to_fahrenheit(double temp) {
    return (temp * 1.8) + 32;
}

void tempResult() {
    double celsius;
    
    cout << "\n What is the current temperature in celsius? ";
    cin >> celsius;

    double fahrenheit = celsius_to_fahrenheit(celsius);

    cout << "The temperature in fahrenheit is " << fahrenheit << endl;
}


int main() {
    
    greetUser();
    addResults();
    averageResult();
    tempResult();
}