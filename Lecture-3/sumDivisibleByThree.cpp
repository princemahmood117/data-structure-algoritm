#include<iostream>
using namespace std;

int main() {

    int num, sum = 0;
    cout << "Enter Number: ";
    cin >> num;

    for (int i=0; i<=num; i++ ) {
        if(i%3 == 0) {
            sum = sum + i;
        }        
    }
    cout << "sum is: " << sum;

    return 0;
}