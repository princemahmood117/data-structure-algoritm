#include <iostream>
using namespace std;

int main()
{
    int n = 4;

     // this is outer loop = row
    for(int i = 0; i < n; i++){  
        
        // this is inner loop = column
        for(int j = 0; j < n; j++){  
            cout << "row " << i << " column " << j << endl;
        }

        // after each iteration of ROW, have a line break
        cout << endl;
    }

    return 0;
}




