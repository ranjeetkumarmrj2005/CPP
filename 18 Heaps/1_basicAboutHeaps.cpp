#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MinHeap{
public:
    int arr[100];
    int idx;

    MinHeap(){
        idx = 1;
    }

    bool empty(){
        return idx == 1;
    }

    int size(){
        return idx - 1;
    }

    int top(){
        if (empty()) return -1;
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;

        while (i > 1){
            int parent = i / 2;
            if (arr[i] < arr[parent]){
                swap(arr[i], arr[parent]);
                i = parent;
            }
            else{
                break;
            }
        }
    }

    void pop(){
        if (empty()) return;

        arr[1] = arr[idx - 1];
        idx--;

        int i = 1;
        while (true){
            int left = 2 * i;
            int right = 2 * i + 1;
            int smallest = i;

            if (left < idx && arr[left] < arr[smallest])
                smallest = left;
            if (right < idx && arr[right] < arr[smallest])
                smallest = right;

            if (smallest == i)
                break;

            swap(arr[i], arr[smallest]);
            i = smallest;
        }
    }
};

int main(){
    MinHeap pq;

    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(13);
    pq.push(5);

    cout << "Min element: " << pq.top() << endl;
    cout << "Heap size: " << pq.size() << endl;

    pq.pop();
    cout << "After pop, min element: " << pq.top() << endl;

    return 0;
}