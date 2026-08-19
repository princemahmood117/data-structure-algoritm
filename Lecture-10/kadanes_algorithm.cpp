#include <iostream>
#include<climits>
using namespace std;

// Logic: current sum + indexedValue of i. then check which one is maximum value and set maximum value.
//  if currenSum is less than 0 then reset currentSum value to 0 but the max value is still the final maximum value

int kadaneAlgo(int arr[], int n){

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++) {

        currentSum = currentSum + arr[i];   
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

// {3, 4, 0, 6, -5, 9};
// i=0 => cs=0+3=3, max=3; i=1==> cs=3+4=7, max=7; i=2 ==> cs=0+7=7, max=7; i=3==> cs=7+6=13, max=13; i=4==> cs=13+(-5)=8, max=13; i=5==> cs=8+9=17, max=17;

    return maxSum;
};


int main() {
    
    int n = 6;
    int arr[] = {3, 4, 0, 6, -5, 9};

    int result = kadaneAlgo(arr, n);

    cout << "Maximum subarray sum : " << result << endl; 

    return 0;
}