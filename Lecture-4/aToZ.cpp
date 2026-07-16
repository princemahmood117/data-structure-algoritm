#include<iostream>
using namespace std;

int main()
{
    int n = 26;

     // this is outer loop = row
    for(int i = 0; i < n; i++){  
        char ch = 'A';
        
        for(int j = 0; j < n; j++){  
            cout << ch;
            ch += 1;
        }

        // after each iteration of ROW, have a line break
        cout << endl;
    }

    return 0;
}