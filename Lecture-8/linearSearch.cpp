#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {

    for(int i = 0; i < size; i++) {

        if (arr[i] == target) {
            return i;  // returns the index
        }
    }
    return -1;
}

int main() {
    
    int arr[] = {1,2,36,77,6,8,10,12};
    int size = 8;
    int target = 10;

    int result = linearSearch(arr, size, target);
    cout << result;


    return 0;
}