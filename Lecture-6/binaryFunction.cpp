#include <iostream>
using namespace std;

int decToBinary(int dec) {

    int ans = 0;
    int pow = 1;

    while (dec > 0) {
        int reminder = dec % 2;
        dec = dec / 2; 
        ans += (reminder * pow);  // ans = ans + (reminder * pow)
        pow = pow * 10;
    };

    return ans;
}

int main() {
    
    int decValue = 30;

    int result = decToBinary(decValue);

    cout << "Binary of " << decValue << " is: " << result;

    return 0;
}