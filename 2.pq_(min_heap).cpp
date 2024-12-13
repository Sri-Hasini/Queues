// this the -----------------------------------------------------MIN HEAP-------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    priority_queue <int, vector <int> , greater <int>> num;
    for (int i = 0; i < n; i++) {
        num.push(a[i]);
    }
    while(!num.empty()) {
        cout << num.top() << " ";
        num.pop();
    }
}
