#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int value;
    int weight;
    Item(int v, int w) : value(v), weight(w) {}
    double valuePerWeight() const {
        return (double)value / weight;
    }
};

bool compare(Item a, Item b) {
    return a.valuePerWeight() > b.valuePerWeight();
}

double fractionalKnapsack(int W, vector<Item>& items, vector<Item>& selectedItems) {
    sort(items.begin(), items.end(), compare);
    double totalValue = 0.0;
    for (Item& item : items) {
        if (W == 0) break;
        if (item.weight <= W) {
            W -= item.weight;
            totalValue += item.value;
            selectedItems.push_back(item);
        } else {
            totalValue += item.value * ((double)W / item.weight);
            selectedItems.push_back(Item(item.value * ((double)W / item.weight), W));
            W = 0;
        }
    }
    return totalValue;
}

int main() {
    int n, W;
    cin >> n;

    vector<Item> items;
    for (int i = 0; i < n; i++) {
        int weight, value;
        cin >> weight >> value;
        items.push_back(Item(value, weight));
    }

    cin >> W;

    cout << "Number of items: " << n << endl;
    cout << "Knapsack capacity: " << W << endl;

    cout << "Items (value, weight):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << " - Value: " << items[i].value << ", Weight: " << items[i].weight << endl;
    }

    vector<Item> selectedItems;
    double maxValue = fractionalKnapsack(W, items, selectedItems);

    int itemCount = 1;
    for (const auto& item : selectedItems) {
        cout << "item " << itemCount << ": " << item.weight << " kg " << item.value << " taka" << endl;
        itemCount++;
    }

    printf("profit: %.0f taka\n", maxValue);

    return 0;
}
