#include <iostream>
using namespace std;


int reverse_number(int n, int rev = 0) {

    if (n == 0)
        return 0;

   else
    return reverse_number(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;


    int reversed = reverse_number(n);

    cout << "Reversed number: " << reversed << endl;

    return 0;
}

