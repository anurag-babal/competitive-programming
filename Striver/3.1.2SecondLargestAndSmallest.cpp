#include<iostream>
#include<vector>

using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> result{2, 0};
    int max = -1, min = INT_MAX;
    for(int i: a) {
        if (i > max) {
            result[0] = max;
            max = i;
        } else if (i > result[0]) {
            result[0] = i;
        }
        if (i < min) {
            result[1] = min;
            min = i;
        } else if (i < result[1]) {
            result[1] = i;
        }
    }
    return result;
}

int main() {
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    vector<int> result = getSecondOrderElements(n, a);
    for(int i: result) cout << i;
    return 0;
}