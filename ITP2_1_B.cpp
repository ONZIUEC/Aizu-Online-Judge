#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<long long int> deq;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int command;
        cin >> command;
        if(command == 0) {
            int d;
            long long int x;
            cin >> d >> x;
            d == 0 ? deq.push_front(x) : deq.push_back(x);
        } else if(command == 1) {
            int p;
            cin >> p;
            cout << deq[p] << endl;
        } else if(command == 2) {
            int d;
            cin >> d;
            d == 0 ? deq.pop_front() : deq.pop_back();
        }
    }
    return 0;
}