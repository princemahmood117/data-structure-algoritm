#include <iostream>
using namespace std;

void arrayReverse(int arr[], int size) {

    int start = 0;
    int end = size - 1;

   while (start < end) {
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
    

}

int main() {
    

    int arr[] = {1,4,7,2,9,4,6,0};
    
    int size = 8;  
    
    arrayReverse(arr, size);   // after the array is passed, it changes the original array

    // now show the reversed array

    for(int i = 0; i < size; i ++) {
        cout << arr[i] << " ";
    }   

    return 0;
}