#include <iostream>
using namespace std;


int factorialCheck (int num) {
    int fact = 1;

    for(int i = 0; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {

    int num;
    cout << "Enter Number to check :";
    cin >> num;
    int result = factorialCheck(num);

    cout << "factorial of " << num <<" is "<< result;
    return 0;

}