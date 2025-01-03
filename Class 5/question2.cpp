#include <iostream>
#include <vector>
using namespace std;

int Fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    vector<int> F(n + 1);

    F[0] = 0;
    F[1] = 1;

    for (int i = 2; i <= n; ++i) {
        F[i] = F[i - 1] + F[i - 2];
    }
    return F[n];
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fib(" << n << ") = " << Fib(n) << endl;
    return 0;
}

