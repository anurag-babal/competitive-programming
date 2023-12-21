#include<iostream>

using namespace std;
int dataTypes(string type) {
    int result = 4;
    if(type == "Long" || type == "Double") result = 8;
    else if(type == "Character") result = 1;
    return result;
}

int main() {
    string type;
    cin >> type;
    cout << dataTypes(type);
    return 0;
}