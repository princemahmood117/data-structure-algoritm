#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayReverse(vector<int> arr) {

    int start = 0;
    int end = arr.size() - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
    

}

int main() {
    

    vector<int> arr = {1,4,7,2,9,4,6,0};
    
    vector<int> reversed = arrayReverse(arr);  // cannot directly print reversed vector cz cout doesnt know how to print vector

    for(int x : reversed) {
        cout << x << " ";
    }
 

    return 0;
}