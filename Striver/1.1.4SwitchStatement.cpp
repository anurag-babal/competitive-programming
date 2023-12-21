#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
    if(ch == 1) return 3.14159 * a[0] * a[0];
    else return a[0] * a[1];
}

int main() {
    int ch;
    int first;
    vector<double> a;
    cin >> ch;
    if(ch == 1) {
        cin >> first;
        a.push_back(first);
    } else {
        int second;
        cin >> first >> second;
        a.push_back(first);
        a.push_back(second);
    }
    cout << fixed << setprecision(5) << areaSwitchCase(ch, a);
    return 0;
}