#include<iostream>

using namespace std;
string compareIfElse(int a, int b) {
    string result = "equal";
    if(a < b) result = "smaller";
    else if(a > b) result = "greater";
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << compareIfElse(a, b);
    return 0;
}