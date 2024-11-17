#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    return a > b;//descending order
}

int main() {
    int len;
    cout << "Enter the number of elements: ";
    cin >> len;

    int arr[len];
    cout << "Enter values for the array elements:\n";
    for (int i = 0; i < len; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "\nArray before sorting:\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }


    sort(arr, arr + len, comp);

    cout << "\nArray after sorting:\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

