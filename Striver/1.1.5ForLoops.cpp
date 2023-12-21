#include<iostream>

using namespace std;

long fib(int num) {
    if(num <= 1) return num;
    return fib(num - 1) + fib(num - 2);
}

int main() {
    int num;
    cin >> num;
    long long first = 1, second = 1, result = 1;
    for(int i = 2; i < num; i++) {
        result = first + second;
        first = second;
        second = result;
    }
    cout << result << endl;
    cout << fib(num);

    return 0;
}