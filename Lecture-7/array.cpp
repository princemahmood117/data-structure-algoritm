#include <iostream>
using namespace std;

int main() {
    
    int ar[] = {1, 2, 3, 4, 5};
    
    int size = sizeof(ar);
    cout <<  "size of array is " << size <<  endl;

    int singleSize = sizeof(ar[0]);
    cout << "Size of any Single element " << singleSize << endl;

    // size = 16 (1 int value = 4 byte, 5 int value = 20 byte) / singleElement value = (1 int = 4 byte) = 20 / 4 = 5 elements
    int length = size / singleSize;   

    cout << "Length of the array is " << length << endl;
    

    for(int i = 0; i < length; i++) {
        cout << ar[i] << " ";
    }
   
    return 0;
}