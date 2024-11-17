#include <iostream>
using namespace std;


int reverse_number(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }

    return reverse_number(n / 10, rev * 10 + n % 10);
}


bool is_palindrome(int n) {

    int reversed = reverse_number(n);


    return n == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    if (is_palindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}

