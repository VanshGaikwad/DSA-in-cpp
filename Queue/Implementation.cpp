class myQueue {
    int *arr;
    int front;
    int rear;
    int size;
    int count;

public:
    myQueue(int n) {
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
        count = 0;
    }

    bool isEmpty() {
        return (count == 0);
    }

    bool isFull() {
        return (count == size);
    }

    void enqueue(int x) {
        if (isFull()) return;

        arr[rear] = x;
        rear = (rear + 1) % size;
        count++;
    }

    void dequeue() {
        if (isEmpty()) return;

        front = (front + 1) % size;
        count--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[(rear - 1 + size) % size];
    }
};