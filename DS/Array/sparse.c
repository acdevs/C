#include <stdio.h>
#include <stdlib.h>

struct Node{
    int row;
    int col;
    int val;
    struct Node *next;
};

void create_node(struct Node **start, int row_index, int col_index, int val){
    struct Node *temp, *iter;
    iter = *start;

    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->row = row_index;
    temp->col = col_index;
    temp->val = val;
    temp->next = NULL;

    if(*start == NULL){
         *start = temp;
         return;
    }

    while(iter->next != NULL){
        iter = iter->next;
    }
    iter->next = temp;
/*
    struct Node *temp;
    temp = (struct Node *) malloc(sizeof(struct Node ));
    temp->row = row_index;
    temp->col = col_index;
    temp->val = val;
    if(*start == NULL){
        *start = temp;
        temp->next = NULL;
        return;
    }
    temp->next = *start;
    *start = temp; 
*/
}

void print_list(struct Node *start){
    struct Node *temp = start;
    while(temp != NULL){
        printf("%d %d %d\n", temp->row, temp->col, temp->val);
        temp = temp->next;
    }
}

int main(){
    struct Node *start = NULL;
    int sparseMatric[4][5] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatric[i][j] != 0)
                create_node(&start, i, j, sparseMatric[i][j]);
 
    print_list(start);
}