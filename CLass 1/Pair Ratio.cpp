#include <bits/stdc++.h>
using namespace std;

struct Pair {
    int a, b;
};

bool comp(Pair p1, Pair p2) {
    return p1.b/p1.a > p2.b/p2.a;//descending
    //for ascending p1.b/p1.a < p2.b/p2.a

}

int main() {
    Pair arr[] = {{5, 100}, {3, 9}, {3, 12}, {1, 6}, {5, 5}, {8, 16}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, comp);

    for (int i = 0; i < n; i++) {
        printf("a:%d b:%d Ratio: %d\n", arr[i].a, arr[i].b,arr[i].b/arr[i].a);
    }

    return 0;
}



