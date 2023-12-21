#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    vector<int> result(2, INT_MAX);
    int max = 0, min = INT_MAX;
    map<int, int> mp;
    for(int i: v) mp[i]++;
    for(auto i: mp) {
        if(i.second > max || (i.second == max && i.first < result[0])) {
            max = i.second;
            result[0] = i.first;
        }
        if(i.second < min || (i.second == min && i.first < result[1])) {
            min = i.second;
            result[1] = i.first;
        }
    }
    return result;
}

int main(void) {
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    for(int i: getFrequencies(v))
        cout << i;
    return 0;
}