#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m) {
    vector<int> arr;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    map<int, int> mp;
    int i = 0;
    for (int i = 0; i < m; i++) {
        if (mp.find(arr[i]) != mp.end()) {
            mp[arr[i]]++;
        }
        else {
            mp[arr[i]] = 1;
        }
        auto max = max_element(
            mp.begin(), mp.end(),
            [](const auto& x, const auto& y) { return x.second < y.second; });
        for (const auto& [key, value] : mp) {
            if (value == max->second) {
                cout << key << endl;
                break;
            }
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    solve(n, m);

    return 0;
}