#include <iostream>
using namespace std;


int factorial(int n) {
    int fact = 1;

    for(int i = 1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}


int nCr(int n, int r) {

    // gives the n! value
    int factN = factorial(n);   

    // gives the r! value
    int factR = factorial(r);   

    // gives (n-r)! value
    int nMr = factorial(n - r);  

    int binomial = factN / (factR * nMr);

    return binomial;
}

// n! / r! * (n-r)!


int main() {

    int n = 4, r = 5;
    int result =  nCr(n, r);
    cout << "Binomial coefficient is :" << result;

    return 0;
}