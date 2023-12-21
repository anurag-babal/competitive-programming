#include<iostream>
#include<vector>

using namespace std;

vector<int> printNos(int x) {
    vector<int> arr;
    if(x == 1) {
        arr.push_back(x);
        return arr;
    }
    arr = printNos(x-1);
    arr.push_back(x);
    return arr;
}

int main(void) {
    int x;
    cin >> x;
    for(auto i: printNos(x)) 
        cout << i;
    return 0;
}