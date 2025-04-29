//Circular_queue - leetcode (acc : 52%) (medium)
//https://leetcode.com/problems/design-circular-queue/description/

#include <bits/stdc++.h>
using namespace std;

class myCircularQueue {
public:
    vector<int> data;
    int head, tail, size;

    // Constructor to initialize the circular queue
    myCircularQueue(int k) {
        data.resize(k);
        head = tail = -1;
        size = k;
    }

    // Adding an element to the circular queue
    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()) head = 0;
        tail = (tail + 1) % size;
        data[tail] = value;
        return true;
    }

    // Deleting an element from the circular queue
    bool deQueue() {
        if (isEmpty()) return false;
        if (head == tail) { // Queue becomes empty after this operation
            head = tail = -1;
            return true;
        }
        head = (head + 1) % size;
        return true;
    }

    // Finding the front element
    int Front() {
        if (isEmpty()) return -1;
        return data[head];
    }

    // Finding the rear element
    int Rear() {
        if (isEmpty()) return -1;
        return data[tail];
    }

    // Checking if the circular queue is empty
    bool isEmpty() {
        return head == -1;
    }

    // Checking if the circular queue is full
    bool isFull() {
        return (tail + 1) % size == head;
    }
};

int main() {
    int k;
    cout << "Enter the size of the circular queue: ";
    cin >> k;
    myCircularQueue* obj = new myCircularQueue(k);
    cout << "Circular Queue with size " << k << " is successfully created\n";

    int t;
    cout << "Enter how many times you want to perform operations approximately: ";
    cin >> t;
    cout << "You can perform " << t << " operations. Pick from the following choices:\n";
    cout << "1) enQueue()\n2) deQueue()\n3) View Front\n4) View Rear\n5) isEmpty()\n6) isFull()\n";

    while (t--) {
        cout << "Enter your choice (or 0 to exit): ";
        int value;
        cin >> value;

        if (value == 0) break;

        switch (value) {
            case 1: {
                cout << "You have chosen enQueue operation. Enter a number to add to the circular queue: ";
                int val;
                cin >> val;
                bool ans = obj->enQueue(val);
                if (ans) cout << val << " is successfully added to the circular queue\n";
                else cout << "Queue is already full\n";
                break;
            }

            case 2: {
                cout << "You have chosen deQueue operation\n";
                bool ans = obj->deQueue();
                if (ans) cout << "Successfully deleted\n";
                else cout << "Queue is already empty\n";
                break;
            }

            case 3: {
                cout << "You have chosen to view the element at the front\n";
                int ans = obj->Front();
                if (ans == -1) cout << "Queue is empty\n";
                else cout << "The value at the front is " << ans << "\n";
                break;
            }

            case 4: {
                cout << "You have chosen to view the element at the rear\n";
                int ans = obj->Rear();
                if (ans == -1) cout << "Queue is empty\n";
                else cout << "The value at the rear is " << ans << "\n";
                break;
            }

            case 5: {
                cout << "You have chosen to check if the queue is empty\n";
                bool ans = obj->isEmpty();
                if (ans) cout << "Yes, the queue is empty\n";
                else cout << "No, the queue is not empty\n";
                break;
            }

            case 6: {
                cout << "You have chosen to check if the queue is full\n";
                bool ans = obj->isFull();
                if (ans) cout << "Yes, the queue is full\n";
                else cout << "No, the queue is not full\n";
                break;
            }

            default:
                cout << "Invalid option! Please choose a valid operation.\n";
                break;
        }
    }

    delete obj; // Free the dynamically allocated memory
    return 0;
}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I N P U T
/*
4
12
1 29
3
1 21
4
1 7
1 30
5
1 108
6
2
3
4
*/
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// O U T P U T
/*
Enter the size of the circular queue: Circular Queue with size 4 is successfully created
Enter how many times you want to perform operations approximately: You can perform 12 operations. Pick from the following choices:
1) enQueue()
2) deQueue()
3) View Front
4) View Rear
5) isEmpty()
6) isFull()
Enter your choice (or 0 to exit): You have chosen enQueue operation. Enter a number to add to the circular queue: 29 is successfully added to the circular queue
Enter your choice (or 0 to exit): You have chosen to view the element at the front
The value at the front is 29
Enter your choice (or 0 to exit): You have chosen enQueue operation. Enter a number to add to the circular queue: 21 is successfully added to the circular queue
Enter your choice (or 0 to exit): You have chosen to view the element at the rear
The value at the rear is 21
Enter your choice (or 0 to exit): You have chosen enQueue operation. Enter a number to add to the circular queue: 7 is successfully added to the circular queue
Enter your choice (or 0 to exit): You have chosen enQueue operation. Enter a number to add to the circular queue: 30 is successfully added to the circular queue
Enter your choice (or 0 to exit): You have chosen to check if the queue is empty
No, the queue is not empty
Enter your choice (or 0 to exit): You have chosen enQueue operation. Enter a number to add to the circular queue: Queue is already full
Enter your choice (or 0 to exit): You have chosen to check if the queue is full
Yes, the queue is full
Enter your choice (or 0 to exit): You have chosen deQueue operation
Successfully deleted
Enter your choice (or 0 to exit): You have chosen to view the element at the front
The value at the front is 21
Enter your choice (or 0 to exit): You have chosen to view the element at the rear
The value at the rear is 30
*/
