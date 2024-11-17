#include <iostream>
#include <vector>
#include <string>
using namespace std;

string commonPrefix(const string& str1, const string& str2) {
    int minLen = min(str1.size(), str2.size());
    int i = 0;
    while (i < minLen && str1[i] == str2[i]) {
        i++;
    }
    return str1.substr(0, i);
}

string longestCommonPrefix(vector<string>& strs, int left, int right) {
    if (left == right) {
        return strs[left];
    }
    int mid = left + (right - left) / 2;
    string leftLCP = longestCommonPrefix(strs, left, mid);
    string rightLCP = longestCommonPrefix(strs, mid + 1, right);
    return commonPrefix(leftLCP, rightLCP);
}

int main() {
    int N;
    cout << "Enter the number of strings: ";
    cin >> N;

    vector<string> strs(N);
    cout << "Enter the strings:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> strs[i];
    }

    if (N == 0) {
        cout << "No strings provided!" << endl;
        return 0;
    }

    string result = longestCommonPrefix(strs, 0, N - 1);

    if (result.empty()) {
        cout << "No common prefix found!" << endl;
    } else {
        cout << "Longest Common Prefix: " << result << endl;
    }

    return 0;
}

