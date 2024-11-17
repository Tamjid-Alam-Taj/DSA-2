#include <iostream>
using namespace std;

int countEven(int Arr[], int i, int j) {

    if (i == j) {
        if (Arr[i] % 2 == 0)
            return 1;
        else
            return 0;
    }


    int mid = (i + j) / 2;
    int leftcount = countEven(Arr, i, mid);
    int rightcount = countEven(Arr, mid + 1, j);

    return leftcount + rightcount;
}

int main() {
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    printf("Number of even numbers: %d\n", countEven(Arr, 0, n - 1));
    return 0;
}
