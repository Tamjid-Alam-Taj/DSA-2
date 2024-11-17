#include <iostream>
using namespace std;


int nCr(int n, int r) {

    if (r == 0 || r == n)
        return 1;

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, r;

    cout << "Enter n (total number of items): ";
    cin >> n;
    cout << "Enter r (number of items to choose): ";
    cin >> r;


    cout << n << " choose " << r << " is: " << nCr(n, r) << endl;

    return 0;
}

