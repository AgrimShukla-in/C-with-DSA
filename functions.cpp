#include <iostream>

using namespace std;



int oneToN(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        count += i;
    }
    return count;
}




int factorial(int n) {
    int count = 1;
    for (int i = 1; i <=n; i++) {
        count *= i;
    }
    return count;
}


int main() {
    int n;
    // cout << "Enter a value to calculate the sum from 1 to N:" << endl;
        cout << "Enter a value N value that garb factorial:" << endl;
    cin >> n;

    // cout << "Hello! Your sum value is: " << oneToN(n) << endl;
        cout << "Hello! Your  factorial is: " << factorial(n) << endl;
    return 0;
}
