#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int flag = true;
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if(x - r < 0 || W < x + r) {
        flag = false;
    }
    if(y - r < 0 || H < y + r) {
        flag = false;
    }
    string messages = flag ? "Yes" : "No";
    cout << messages << endl;
    return 0;
}