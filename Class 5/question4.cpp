
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsack(int W, const vector<int>& weights, const vector<int>& values, int n) {
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int w = W; w >= weights[i]; --w) {
            dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
        }
    }

    return dp[W];
}

int main() {
    int n, W;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<int> weights(n), values(n);

    cout << "Enter the weights and values of the items:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Item " << i + 1 << " - weight: ";
        cin >> weights[i];
        cout << "Item " << i + 1 << " - value: ";
        cin >> values[i];
    }

    cout << "Enter the capacity of the knapsack: ";
    cin >> W;

    int maxProfit = knapsack(W, weights, values, n);
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
