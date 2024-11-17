#include <iostream>
#include <algorithm>
using namespace std;

struct Res {
    int mx, mn;
};

Res findMaxMin(int A[], int i, int j) {
    if (i == j) {
        return {A[i], A[i]};
    } else {
        int mid = (i + j) / 2;
        Res res1 = findMaxMin(A, i, mid);
        Res res2 = findMaxMin(A, mid + 1, j);
        int mx = max(res1.mx, res2.mx);
        int mn = min(res1.mn, res2.mn);
        return {mx, mn};
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Res result = findMaxMin(arr, 0, n - 1);
    cout << "Maximum value: " << result.mx << endl;
    cout << "Minimum value: " << result.mn << endl;

    return 0;
}
