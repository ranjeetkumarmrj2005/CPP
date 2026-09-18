#include<bits/stdc++.h>
using namespace std;

class myQueue {
  public:
    vector<int>v;
    int i;
    int j;
    int capacity;

    myQueue(int n) {
        // Define Data Structures
        this->i=0;
        this->j=0;
        v.resize(n);
        this->capacity=n;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(j-i==0) return true;
        else return false;
    }

    bool isFull() {
        // check if the queue is full
        if(j-i==capacity) return true;
        else return false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(j-i<capacity){
            v[j]=x;
            j++;
        }
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(j-i==0) return;

        while(i<j-1){
            v[i]=v[i+1];
            i++;
        }

        i=0;
        j--;
    }

    int getFront() {
        // Returns the front element of the queue.
        if(j-i>0) return v[i];
        else return -1;
    }

    int getRear() {
        // Return the last element of queue
        if(j-i>0) return v[j-1];
        else return -1;
    }
};

int main() {

    myQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    cout << "Is Empty: " << q.isEmpty() << endl;
    cout << "Is Full: " << q.isFull() << endl;

    q.dequeue();

    cout << "After dequeue:" << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << "After adding more elements:" << endl;
    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    cout << "Is Full: " << q.isFull() << endl;

    return 0;
}