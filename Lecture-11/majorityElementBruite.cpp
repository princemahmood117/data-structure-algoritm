#include <iostream>
#include <vector>
using namespace std;

int majorElement(vector<int> arr) {
    
    for (int val : arr) {
        int count = 0;  

        for (int element : arr) {            
            if(element == val) {
                count++;
            }
        }

        return count;
    }
}

int main() {

    vector <int> arr = {1, 2, 1, 1, 2};
    int result = majorElement(arr);

    cout << result;
    return 0;
}