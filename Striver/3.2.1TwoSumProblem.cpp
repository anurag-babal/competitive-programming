#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string read(int n, vector<int>& book, int target)
{
    // Write your code here.
    sort(book.begin(), book.end());
    int i = 0, j = book.size();
    bool status = false;
    while(i < j) {
        int sum = book[i] + book[j-1];
        if (sum == target) {
          status = true;
          break;
        }
        if (target > sum) i++;
        else j--;
    }
    if (status) return "YES";
    return "NO";
}

int main() {
  int n, target;
  vector<int> book;
  cin >> n >> target;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    book.push_back(tmp);  
  }
  cout << read(n, book, target);
  return 0;
}