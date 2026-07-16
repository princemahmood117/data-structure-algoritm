#include<iostream>
using namespace std;

int main() {

    /* 
    output: 
    123
    456
    789
    */

    int n = 3;
    int num = 1;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {
            cout << num;
            num++;
        }

        cout << endl; ;
    };

    return 0;
}







// #include<iostream>
// using namespace std;

// int main() {

//     /* output: 
//     111
//     222
//     333
//     */

//     int n = 4;

//     for(int i = 1; i < n; i++) {

//         for(int j = 1; j < n; j++) {
//             cout << i;
            
//         }

//         cout << endl;
//     };

//     return 0;
// }





// =-==================================






// #include<iostream>
// using namespace std;

// int main() {

//     /* output: 
//     123
//     123
//     123
//     */

//     int n = 4;

//     for(int i = 1; i < n; i++) {

//         for(int j = 1; j < n; j++) {
//             cout << j;
            
//         }

//         cout << endl;
//     };

//     return 0;
// }

