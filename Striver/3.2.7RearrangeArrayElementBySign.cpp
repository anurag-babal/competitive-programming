#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
  int positive = 0, negative = 1;
  int n = a.size();
  vector<int> result = {n};
  for(int i = 0; i < n; i++) {
    if(a[i] >= 0) {
      result[positive] = a[i];
      positive += 2;
    }
    if(a[i] < 0) {
      result[negative] = a[i];
      negative += 2;
    }
  }
  return result;
}

int main(void) {
  int t;
  cin >> t;
  vector<int> numbers = {t};
  for (int i = 0; i < t; i++) cin >> numbers[i];
  for (int n: alternateNumbers(numbers)) cout << n << " ";
}