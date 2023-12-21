#include<iostream>

using namespace std;

void diamond(int row) {
    for(int i = 0; i < row; i++) {
        int col = 0;
        while(col < (2*row)) {
            if(col >= (row-i) && col <= (row+i)) cout << "*"; 
            else cout << " ";
            col++;
        }
        cout << endl;
    }
    for(int i = row-1; i >= 0; i--) {
        int col = 0;
        while(col < (2*row)) {
            if(col >= (row-i) && col <= (row+i)) cout << "*"; 
            else cout << " ";
            col++;
        }
        cout << endl;
    }
}

void halfDiamond(int n) {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n-1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
    
}

void binTriangle(int n) {
    for(int i = 0; i < n; i++) {
        int start = (i+1)%2;
        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

void numCrown(int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        for(int j = 0; j < 2*n; j++) {
            if(j <= i) cout << count++;
            else if(j >= ((2*n)-1)-i) cout << --count;
            else cout << " ";
        }
        cout << endl;
    }
}

void letterTriangle(int n) {
    for (int i = 0; i < n; i++) {
        char c = 'A';
        for(int j = 0; j <= i; j++)
            cout << c++;
        cout << endl;
    }
}

void alphaHill(int n) {
    for (int i = 0; i < n; i++) {
        char c = 'A';
        for(int j = 0; j < 2*n; j++) {
            if(j >= (n-1)-i && j <= (n-1)+i) {
                if(j==n) c--;
                if(j >= n) cout << --c;
                else cout << c++;
            }
            else cout << " ";
        }
        cout << endl;
    }
}

void alphaTriangle(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + (n-1) - i;
        for(int j = 0; j <= i; j++) cout << ch++;
        cout << endl;
    }
}

void symmetricVoid(int n) {
    for(int i = 0; i < (2*n); i++) {
        for(int j = 0; j < (2*n); j++) {
            int start;
            if(i < n) start = n-i;
            else start = (i-n)+1;
            if(j >= start && j <= (((2*n) - 1) - start)) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}

void symmetricButterfly(int n) {
    int start = 0;
    for(int i = 0; i < (2*n)-1; i++) {
        if(i < n) start++;
        else start--;
        for(int j = 0; j < (2*n); j++) {
            if(j < start || j > ((2*n) - 1) - start) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void hollowRect(int n) {
    for(int i = 0; i < n; i++) {
        int spaces = n-2;
        for(int j = 0; j < n; j++) {
            if(j == 0 || j == n-1) cout << "*";
            else if(i == 0 || i == n-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void numberPattern(int n) {
    for(int i = 0; i < (2*n)-1; i++) {
        int tmp = n, start = i;
        if(i >= n) start = ((2*n)-2)-i;
        for(int j = 0; j < (2*n)-1; j++) {
            if(j >= start && j <= ((2*n)-2)-start) cout << tmp;
            else if(j < n) cout << tmp--;
            else cout << ++tmp;
        }
        cout << endl;
    }
}

int main(void) {
    int row;
    cin >> row;
    numberPattern(row);
    return 0;
}