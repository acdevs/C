#include <stdio.h>
#include <stdlib.h>

struct Deque{
    int front, rear;
    unsigned int capacity;
    int *arr;
};

struct Deque* create_deque(unsigned int capacity){
    struct Deque* deque;
    deque->capacity = capacity;
    deque->arr = (int *) malloc(capacity * sizeof(int));
    deque->front = deque->rear = -1;
    return deque;
}

void push_back(struct Deque* deque, int item){
    if(deque->rear == deque->capacity - 1 && deque->front == 0 || deque->rear == deque->front - 1){
        printf("deque Overflow\n");
        return;
    }
    if(deque->rear == -1){
        deque->front++;
    }
    deque->rear = (deque->rear + 1) % deque->capacity;
    deque->arr[deque->rear] = item;
}

// void push_front(struct Deque* deque, int item){
//     if(deque->rear == deque->capacity - 1 && deque->front == 0 || deque->rear == deque->front - 1){
//         printf("deque Overflow\n");
//         return;
//     }
//     if(deque->front == -1){
//         deque->rear += deque->capacity;
//         deque->front = 0;
//     }
//     deque->front = (deque->front - 1) % deque->capacity + deque->capacity;
//     deque->arr[deque->front] = item;
// }

int pop_front(struct Deque* deque){
    if(deque->front == -1){
        printf("deque Underflow\n");
        return -1;
    }
    int dedequed = deque->arr[deque->front];
    deque->front = (deque->front + 1) % deque->capacity;
    if(deque->front > deque->rear){
        deque->front = deque->rear = -1;
    }
    return dedequed;
}

// int pop_back(struct Deque* deque){
//     if(deque->rear == -1){
//         printf("deque Underflow\n");
//         return -1;
//     }
//     int dedequed = deque->arr[deque->rear];
//     deque->rear = (deque->rear - 1) % deque->capacity;
//     if(deque->front > deque->rear){
//         deque->front = deque->rear = -1;
//     }
//     return dedequed;
// }

void print_deque(struct Deque* deque){
    if(deque->front == -1){
        printf("deque Underflow\n");
        return;
    }
    int i = deque->front;
    printf("👀 : ");
    while(1){
        printf("%d ", deque->arr[i]);
        if(i == deque->rear) break;
        i = (i + 1) % deque->capacity;
    }
    printf("\n");
}

int main(){
    struct Deque* deque = create_deque(5);
}