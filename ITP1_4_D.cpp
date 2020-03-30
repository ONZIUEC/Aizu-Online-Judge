#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array;
    long long int sum = 0;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
        array.push_back(num);
    }
    sort(array.begin(), array.end());
    cout << array[0] << " " << array[n-1] << " " << sum << endl;

}