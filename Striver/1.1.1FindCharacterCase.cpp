#include<iostream>

using namespace std;
int main() {
    char c;
    int result = -1;
    cin >> c;
    if(c >= 'a' && c <= 'z') result = 0;
    else if(c >= 'A' && c <= 'Z') result = 1;
    cout << result;
    return 0;
}