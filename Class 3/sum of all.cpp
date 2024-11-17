#include <iostream>

int sumAll(int Arr[], int i, int j) {
    if (i == j) {
        return Arr[i];
    }

    int mid = (i + j) / 2;
    int leftsum = sumAll(Arr, i, mid);
    int rightsum = sumAll(Arr, mid + 1, j);

    return leftsum + rightsum;
}

int sumEven(int Arr[], int i, int j) {
    if (i == j) {
        return (Arr[i] % 2 == 0) ? Arr[i] : 0;
    }

    int mid = (i + j) / 2;
    int leftsum = sumEven(Arr, i, mid);
    int rightsum = sumEven(Arr, mid + 1, j);

    return leftsum + rightsum;
}

int countEven(int Arr[], int i, int j) {
    if (i == j) {
        return (Arr[i] % 2 == 0) ? 1 : 0;
    }

    int mid = (i + j) / 2;
    int leftcount = countEven(Arr, i, mid);
    int rightcount = countEven(Arr, mid + 1, j);

    return leftcount + rightcount;
}

int main() {
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(Arr) / sizeof(Arr[0]);

    printf("Sum of all numbers: %d\n", sumAll(Arr, 0, n - 1));
    printf("Sum of even numbers: %d\n", sumEven(Arr, 0, n - 1));
    printf("Count of even numbers: %d\n", countEven(Arr, 0, n - 1));

    return 0;
}

