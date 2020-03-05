#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    int right_n;
    int left_n;
    cin >> q;
    vector<int> A;
    for(int i = 0; i < q; i++) {
        cin >> left_n;
        if(left_n == 0) {
            cin >> right_n;
            A.push_back(right_n);
        } else if(left_n == 1) {
            cin >> right_n;
            cout << A[right_n] << endl;
        } else if(left_n == 2) {
            A.pop_back();
        }
    }
    return 0;
}