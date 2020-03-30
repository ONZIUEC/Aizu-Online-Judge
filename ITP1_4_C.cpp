#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    char op;
    int result;
    while(true) {
    cin >> a >> op >> b;
    if(op == '?') {
        break;
    }
    if(op == '+') {
        result = a + b;
    }
    if(op == '-') {
        result = a - b;
    }
    if(op == '*') {
        result = a * b;
    }
    if(op == '/') {
        result = a / b;
    }
    cout << result << endl;
    }
    return 0;
}