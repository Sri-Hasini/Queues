// priority queue is a type of queue where we can store elements in descending (by default) or ascending order.
// log n complexity
// we can only access top().
// we can perform operations like pq.empty() says if it is empty or not, pq.top() returns the element at the top, 
// pq.push() pushes element at the end , pq.pop() pops the element at beginning
// pq.swap() Used to swap the contents of two queues provided the queues must be of the same type, although sizes may differ.
// we can write it in 2 ways min heap and max heap
// the following is the ----------------------------------------------------MAX HEAP----------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    priority_queue <int> num;
    for (int i = 0; i < n; i++) {
        num.push(a[i]);
    }
    while(!num.empty()) {
        cout << num.top() << " ";
        num.pop();
    }
}
