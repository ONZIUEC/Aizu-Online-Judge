#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a+3);
    for(int i = 0; i < 3; i++) {
        i != 2 ? cout << a[i] << " " : cout << a[i];
    }
    cout << endl;
    return 0;
}