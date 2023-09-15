#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int front, rear;
    unsigned int capacity;
    int *arr;
};

struct Queue* create_queue(unsigned int capacity){
    struct Queue* queue;
    queue->capacity = capacity;
    queue->arr = (int *) malloc(capacity * sizeof(int));
    queue->front = queue->rear = -1;
    return queue;
}

void enqueue(struct Queue* queue, int item){
    if(queue->rear == queue->capacity - 1){
        printf("Queue Overflow\n");
        return;
    }
    if(queue->rear == -1){
        queue->front++;
        queue->rear++;
    }
    queue->arr[queue->rear++] = item;
}

int dequeue(struct Queue* queue){
    if(queue->front == -1){
        printf("Queue Underflow\n");
        return -1;
    }
    int dequeued = queue->arr[queue->front++];
    if(queue->front > queue->rear){
        queue->front = queue->rear = -1;
    }
    return dequeued;
}

void print_queue(struct Queue* queue){
    if(queue->front == -1){
        printf("Queue Underflow\n");
        return;
    }
    printf("👀 : ");
    for(int i = queue->front; i < queue->rear; i++){
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main(){
    struct Queue* queue = create_queue(10);
    enqueue(queue, 1);
    print_queue(queue);
    enqueue(queue, 2);
    print_queue(queue);
    enqueue(queue, 3);
    enqueue(queue, 4);
    print_queue(queue);
    dequeue(queue);
    print_queue(queue);
    dequeue(queue);
    print_queue(queue);
    dequeue(queue);
    dequeue(queue);
    print_queue(queue);
    dequeue(queue);
    enqueue(queue, 1);
    print_queue(queue);
    enqueue(queue, 2);
    print_queue(queue);
    enqueue(queue, 3);
    enqueue(queue, 4);
    print_queue(queue);
}