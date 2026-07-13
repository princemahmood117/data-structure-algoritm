#include<iostream>
using namespace std;

int main() {

    double first,second;
    char ope;

    cout << "Enter First Number : ";
    cin >> first;

    cout << "Enter operator : (+, -, *, /, %)";

    cout << "Enter the Operator : ";
    cin >> ope;
    
    cout << "Enter Second Number : ";
    cin >> second;


    switch (ope)
    {
    case '+':
        cout << "Result: " << first + second;
        break;

    case '-':
        cout << "Result: " << first - second;
        break;

    case '*':
        cout << "Result: " << first * second;
        break;

    case '/':
        if(second == 0) {
            cout << "Cannot be divided by 0 ";
        } else {
            cout << "Result: " << first / second;
        }
        break;
        
    case '%':
        if(second == 0) {
            cout << "Cannot use second value as 0 ";
        } else {
            cout << "Result: " << (int)first % (int)second;
        }
        break;
    
    default:
        cout << "Something went wrong! Check again ";
        break;
    }
}
