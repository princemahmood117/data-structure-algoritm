#include<iostream>

using namespace std;

int main() {
    int number;
    bool isPrime = true;   // initially we assume prime number is true

    cout << "Enter Number to check : ";
    cin >> number;

    //  as 1 and the number itself is factors of prime number, so we dont take them in consideration. We will start the loop from 2 to (number - 1)
    for(int i = 2; i <= number-1; i++ ) {

        // if reminder is 0, then the number has a divisor, so the number is not Prime-Number (change the isPrime value to false). break will immediately exit the code.
        if(number % i == 0) {  
            isPrime = false;
            cout << "Divisor found! "; 
            break;
        }
    }

     if(isPrime == true) {
            cout << number << " is a Prime Number\n";
        } else {
            cout << number << " is a non-prime Number\n";
    };
    return 0;
}
