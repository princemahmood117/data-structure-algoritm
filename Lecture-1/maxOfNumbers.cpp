#include<iostream>
using namespace std;
int main() {

    int a , b;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    
    if(a > b) {
        cout << "A : " << a << " is maximum";
    } else {
        cout << "B : " << b << " is maximum";
    }

    return 0;
}