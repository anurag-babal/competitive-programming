#include<iostream>

using namespace std;

int calcGCD(int n, int m) {
    while(true) {
        int rem = n%m;
        if(rem == 0) return m;
        n = m;
        m = rem;
    }
}

int main(void) {
    int n, m;
    cin >> n >> m;
    cout << calcGCD(n, m);
    return 0;
}