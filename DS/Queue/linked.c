#include <stdio.h>
#include <stdlib.h>

struct QueueNode{
    int data;
    struct QueueNode* next;
};

struct QueueNode* create_queue(int data){
    struct QueueNode* node = NULL;
    return node;
}

void enqueue(struct QueueNode** queue, int item){
    struct QueueNode  *node, *iter = *queue;
    node = (struct QueueNode*) malloc(sizeof(struct QueueNode));
    node->data = item;
    node->next = NULL;

    if(iter == NULL){
        *queue = node;
        return;
    }
    while(iter->next != NULL) iter = iter->next;
    iter->next = node;
}

int dequeue(struct QueueNode** queue){
    if(*queue == NULL){
        printf("Queue Underflow\n");
        return -1;
    }
    struct QueueNode* temp = *queue;
    *queue = temp->next;

    return temp->data;
    free(temp);
}

void print_queue(struct QueueNode* queue){
    if(queue == NULL){
        printf("Queue Underflow\n");
        return;
    }
    struct QueueNode* temp = queue;
    printf("👀 : ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct QueueNode* queue = create_queue(10);
    enqueue(&queue, 1);
    print_queue(queue);
    enqueue(&queue, 2);
    print_queue(queue);
    enqueue(&queue, 3);
    print_queue(queue);
    enqueue(&queue, 4);
    print_queue(queue);
    dequeue(&queue);
    print_queue(queue);
    dequeue(&queue);
    print_queue(queue);
    dequeue(&queue);
    print_queue(queue);
    dequeue(&queue);
    print_queue(queue);
    dequeue(&queue);
    print_queue(queue);
    enqueue(&queue, 1);
    print_queue(queue);
    enqueue(&queue, 2);
    print_queue(queue);
    enqueue(&queue, 3);
    print_queue(queue);
    enqueue(&queue, 4);
    print_queue(queue);
}