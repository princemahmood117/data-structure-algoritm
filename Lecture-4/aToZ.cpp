// #include<iostream>
// using namespace std;

// int main()
// {
//     int n = 26;

//      // this is outer loop = row
//     for(int i = 0; i < n; i++){  
//         char ch = 'A';
        
//         for(int j = 0; j < n; j++){  
//             cout << ch;
//             ch += 1;
//         }

//         // after each iteration of ROW, have a line break
//         cout << endl;
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {

    int n = 3;
    // charecter stores in memory as ASCII value in integer [A=65, B=66, C=67,...]
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch++; 
        }

        cout << endl;

    }
    
    return 0;
}