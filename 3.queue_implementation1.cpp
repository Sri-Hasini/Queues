//Queue implementation via class
#include <bits/stdc++.h>
using namespace std;
class myqueue {
    private:
        vector <int> data;
        int p_start;
    public:
    myqueue() {
        p_start = 0;
    }
    void enqueue(int x) {
        data.push_back(x);
        cout << x << " - is added to the queue successfully\n";
    }
    void dequeue() {
        cout << data[p_start] << " - is deleted from the queue\n";
        data.erase(data.begin());
    }
    void display() {
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }   
};
int main() {
    myqueue q;
    int n = 1;
    
    while (n != 4) {
        cout << "**Enter a number from the following **\n1) Enqueue\n2) Dequeue\n3) Display\n4)Exit\n\n";
        cin >> n;
        cout << "you entered : " << n << endl;
        if (n == 4) {
            cout << "\"You choose to exit this program\"\n------------------E X I T------------------";
            break;
        }
        cout << "=>" << endl;
        switch(n) {
            case 1: cout << "\"You picked enqueue operation\"\n";
                cout << "enter a number to add into the queue\n";
                int x;
                cin >> x;
                q.enqueue(x);
                break;
            case 2: cout << "\"You picked dequeue operation\"\n";
                q.dequeue();
                break;
            case 3: cout << "\"You picked diplay operation\"\n";
                q.display();
                break;
            default: cout << "\'Enter valid number from the given options\'\n";
                break;
        }
        cout <<"\n-------------------------------------------\n\n";
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// I N P U T
/*
1 16
1 31
1 29
1 21
1 7
1 30
2
2
3
5
4
*/

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// O U T P U T
/*
**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 1
=>
"You picked enqueue operation"
enter a number to add into the queue
16 - is added to the queue successfully

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 1
=>
"You picked enqueue operation"
enter a number to add into the queue
31 - is added to the queue successfully

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 1
=>
"You picked enqueue operation"
enter a number to add into the queue
29 - is added to the queue successfully

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 1
=>
"You picked enqueue operation"
enter a number to add into the queue
21 - is added to the queue successfully

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 1
=>
"You picked enqueue operation"
enter a number to add into the queue
7 - is added to the queue successfully

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 1
=>
"You picked enqueue operation"
enter a number to add into the queue
30 - is added to the queue successfully

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 2
=>
"You picked dequeue operation"
16 - is deleted from the queue

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 2
=>
"You picked dequeue operation"
31 - is deleted from the queue

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 3
=>
"You picked diplay operation"
29 21 7 30 

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 5
=>
'Enter valid number from the given options'

-------------------------------------------

**Enter a number from the following **
1) Enqueue
2) Dequeue
3) Display
4)Exit

you entered : 4
"You choose to exit this program"
------------------E X I T------------------
*/
