#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
  int max = 0, min = 0, profit = 0;
  int n = prices.size();
  cout << n;

  for (int i = n-1; i >= 0; i--) {
    if (prices[i] > max) {
      max = prices[i];
    }
    min = prices[i];
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