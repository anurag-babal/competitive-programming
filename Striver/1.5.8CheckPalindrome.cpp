#include<iostream>
#include<vector>

using namespace std;

void reverseStringRec(int i, string& str) {
    int n = str.size();
    if(i >= n/2) return;
    swap(str[i], str[n-1-i]);
    reverseStringRec(++i, str);
}

bool isPalindrome(string& str) {
    string tmp = str;
    reverseStringRec(0, str);
    return str == tmp;
}

int main(void) {
    string str;
    cin >> str;
    cout << isPalindrome(str);
    return 0;
}