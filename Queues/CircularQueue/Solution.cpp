#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size=n;
        front=-1;
        rear=-1;
        arr=new int [size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // q is full //
        if((front==0 && rear==size-1) || (rear=(front-1) %(size-1))){
            return false;
        }
        else{
            // when inserting the 1st ele //
        if(front==-1){
            front=rear=0;
        } 
        // rear is at last and front is in middle //
        else if (rear == size - 1 && front!=0) {
            rear = 0;
        }
        // normal flow insertion // 
        else {
            rear++;
        }
        arr[rear] = value;
        return true;
        }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // q is empty //
        if(front==-1){
            return -1;
        }
        else{
        int ans=arr[front];
        arr[front]=-1;
        // delete the only ele //
        if (front == rear) {
          front =rear=-1;
        }
        // circular nature //
         else if(front==size-1){
            front=0;
        } 
        // normal flow //
        else {
            front++;
        }
        return ans;
        }
    }
};