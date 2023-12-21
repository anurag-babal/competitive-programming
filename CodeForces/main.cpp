#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) {
      arr[i] = n - i;
    }
    for (int i = 0; i < k; i++) {
      int tmp = arr[n-1];
      for (int j = n-1; j >= i + 1; j--) {
        arr[j] = arr[j - 1];
      }
      arr[i] = tmp;
    }
    for (int i : arr) cout << i << " ";
    cout << endl;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  solve(t);

  return 0;
}