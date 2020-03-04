#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    string messages = "No";
    cin >> a >> b >> c;
    if(a < b && b < c) {
        messages = "Yes";
    }
    cout << messages << endl;
    return 0;
}