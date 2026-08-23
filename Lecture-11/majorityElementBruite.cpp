#include <iostream>
#include <vector>
using namespace std;

vector<int> majEle(vector<int> arr) {

    int n = arr.size();
    for (int val : arr) {
        int count = 0;
        cout << val << " | ";
        for (int element : arr) {
            cout << element;
            if(element == val) {
                count++;
            }
        }

        return count;
    }
}

int main() {

    vector <int> arr = {1, 2, 1, 1, 2};
    vector<int> result = majEle(arr);

    return 0;
}