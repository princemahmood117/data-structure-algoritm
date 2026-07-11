#include<iostream>
using namespace std;
int main() {


    int n, i;
    int mul = 1;

    cout << "Enter value of N : ";
    cin >> n;

    for(i = 1; i <= n ; i++) {
        mul = mul * i;         
    };

    cout << "Factorial of " << n << " is: " << mul ;
    
    return 0;

}