#include<iostream>
#include<vector>

using namespace std;

void factNumRec(long long n, vector<long long>& arr) {
    long long num = (arr.size()+1) * arr.back(); 
    if(num > n) return;
    arr.push_back(num);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    factNumRec(n, result);
    return result;
}