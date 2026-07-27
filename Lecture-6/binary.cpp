#include <iostream>
using namespace std;

int main() {
    
    int decimalValue = 30;
    int ans = 0;
    int pow = 1;

    while(decimalValue > 0) {
        int rem = decimalValue % 2;
        ans += rem * pow;
        pow = pow * 10;
        
        decimalValue = decimalValue / 2;
    }

    cout << ans;
    return 0;
}