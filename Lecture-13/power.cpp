#include <iostream>
using namespace std;

double myPower(double x, int n)
{

    long binaryForm = n;
    double ans = 1;

    // if the N is less the 0 then do this and the rest of the operation will be the same
    if (n < 0)
    {
        x = 1 / x;
        binaryForm = -binaryForm;
    }

    while (binaryForm > 0)
    {
        if (binaryForm % 2 == 1)  // if the reminder is 1 (odd)
        {
            ans = ans * x;
        }

        x = x * x;
        binaryForm = binaryForm / 2;
    }

    return ans;
}

int main()
{
double result = myPower(10, 2);
    cout << result;

    return 0;
}