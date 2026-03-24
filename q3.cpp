#include <iostream>
using namespace std;

int main() {
    char choice;
    double temp;
    cout << "Convert to (C/F): ";
    cin >> choice;
    if(choice == 'C' || choice == 'c') {
        cout << "Enter Fahrenheit: ";
        cin >> temp;
        cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
    } else {
        cout << "Enter Celsius: ";
        cin >> temp;
        cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
    }
    return 0;
}
