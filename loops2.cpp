#include <iostream>

using namespace std;




// int main() {
//     int a = 4;

//     for (int i = 0; i < a; i++) {
//         for (int y = 0; y < a - i - 1; y++) {
//             cout << " ";
//         }
//         for (int y = 1; y <= i + 1; y++) {
//             cout << i + 1;
//         }

//         for (int y = i; y >= 1; y--) {
//             cout << y;
//         }

//         cout << endl;
//     }

//     return 0;
// }


// int main(){
   
// int a=4;
// for ( int i = 0; i < a; i++){
// for (int y = 0; y < a-i; y++){
//    cout<<"*";
// }
// cout<<endl;
// }


//     return 0;
// }


// int main(){
//   int a=4;
//   for (int i = 0; i < a; i++){
//    for (int y = 0; y < i+1; y++){
//     cout<<y+1;
//    };
//    cout<<endl;
//   }
//   return 0;
// }

int main(){
    int a=4;

    for (int i = 0; i < a; i++){
     for (int y = 0; y < i+1; y++){
      cout<<i+1;
     }
     cout<<endl;
    }
    
    return 0;
}
