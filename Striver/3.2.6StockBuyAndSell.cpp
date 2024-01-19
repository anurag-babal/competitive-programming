#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& stocks) {
  int max = 0, min = 0, profit = 0;
  int n = stocks.size();
  cout << n;

  for (int i = n-1; i >= 0; i--) {
    if (stocks[i] > max) {
      max = stocks[i];
    }
    min = stocks[i];
    if((max - min) > profit) {
      profit = max - min;
    }
    cout << max << " " << min << " " << profit << "  ";
  }
  return profit;
}

int main(void) {
  int t;
  cin >> t;
  vector<int> stocks = {t};
  for (int i = 0; i < t; i++) cin >> stocks[i];
  cout << maxProfit(stocks);
}