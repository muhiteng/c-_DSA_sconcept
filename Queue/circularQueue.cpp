#include<iostream>
using namespace std;

const int capacity=100;
struct CircularQueue
{
    int arr[capacity];
    int front=-1;  // front or head
    int rear=-1;  // rear or tail

    bool isEmpty(){
        if(front == -1 && rear == -1) return true;
        else return false;
    }

    bool iSFull(){
        if((rear+1)% capacity==front) return true;
        else return 1;
    }

    void enqueue(int val){
        if(iSFull()) return;
        else if(isEmpty()){
            front = rear = 0;
            
        }else
        {
            rear=(rear+1)% capacity;
        }
        arr[rear]= val;
    }

    void dequeue(){
        if(isEmpty()) return;
        else if ( front == rear){
           front = rear = -1;
        }
        else
        front=(front+1)%capacity; 
    }

    int front_val(){
        if(isEmpty()) return -1;
        else return arr[front];
    }

};


int main(){

  CircularQueue q;
  q.enqueue(10);
  q.enqueue(5);
  q.enqueue(8);
  while(! q.isEmpty()){
      cout<<q.front_val()<<endl;
      q.dequeue();
  }
    return 0;
}