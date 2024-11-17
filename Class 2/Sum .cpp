#include <iostream>
using namespace std;


int sum_n(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_n(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    cout << "Sum of first " << n << " natural numbers is: " << sum_n(n) << endl;

    return 0;
}

