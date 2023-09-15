#include <stdio.h>
#include <stdlib.h>

// implementation of singly linked list
struct ListNode   
{  
    int data;  
    struct ListNode *next;
};

struct ListNode* create_list(){
    struct ListNode* node = NULL;
    return node;
}

void insert_begin(struct ListNode** head){
    struct ListNode *ptr;
    int item;
    ptr = (struct ListNode *) malloc(sizeof(struct ListNode *));
    if( ptr == NULL){
        printf("OVERFLOW\n");
    }
    else{
        printf("Enter item: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = *head;
        *head = ptr;
        printf("ListNode inserted! at %p\n", ptr);
    }
}

void insert_end(struct ListNode** head){
    struct ListNode *ptr, *temp;
    int item;
    ptr = (struct ListNode *) malloc(sizeof(struct ListNode));
    if(ptr == NULL){
        printf("OVERFLOW\n");
    }
    else{
        printf("\nEnter item: ");
        scanf("%d", &item);
        ptr->data = item;
        if(*head == NULL){
            ptr->next = NULL;
            *head = ptr;
            printf("ListNode inserted! at %p\n", ptr);
        }
        else{
            temp = *head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("ListNode inserted! at %p\n", ptr);
        }
    }
}

void insert_middle(struct ListNode** head){
    if(*head == NULL){
        printf("List is empty!\n");
        insert_begin(head);
    }
    else{
        int pos, count = 1;
        printf("Enter the pos for ListNode to be insert at: ");
        scanf("%d", &pos);
        struct ListNode *temp = *head, *ptr;
        while(temp != NULL){
            if(pos == 1){
                insert_begin(head);
                break;
            }
            if(count == pos - 1){
                ptr = (struct ListNode *) malloc(sizeof(struct ListNode *));
                if( ptr == NULL){
                    printf("OVERFLOW\n");
                    break;
                }
                int item;
                printf("Enter item: ");
                scanf("%d", &item);
                ptr->data = item;
                ptr->next = temp->next;
                temp->next = ptr;
                printf("ListNode inserted at %d pos!\n", pos);
            }
            count++;
            temp = temp->next;
        }
        if(pos > count){
            printf("Out of list bound!\n");
        }
    }
}

void show(struct ListNode* head){
    struct ListNode *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("Empty list!");
    }
    else{
        printf("\nPrinting values . . .\n");
        while(ptr != NULL){
            ptr->next != NULL ? printf("%d -> ", ptr->data) : printf("%d", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void delete_begin(struct ListNode** head){
    struct ListNode *ptr;
    ptr = *head;
    if(ptr == NULL){
        printf("UNDERFLOW\n");
    }
    else{
        *head = ptr->next;
        free(ptr);
        printf("ListNode deleted!\n");
    }
}

void delete_end(struct ListNode** head){
    struct ListNode *temp, *ptr;
    temp = *head;
    if(temp == NULL){
        printf("UNDERFLOW\n");
    }
    else{
        while(temp->next != NULL){
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        free(temp);
        printf("ListNode deleted!\n");
    }
}

void delete_middle(struct ListNode** head){
    if(*head == NULL){
        printf("UNDERFLOW!\n");
    }
    else{
        int pos, count = 1;
        printf("Enter the pos of ListNode to be deleted at: ");
        scanf("%d", &pos);
        struct ListNode *temp = *head, *ptr;
        while(temp->next != NULL){
            if(pos == 1){
                delete_begin(head);
                break;
            }
            if(count == pos - 1){
                ptr = temp->next;
                temp->next = ptr->next;
                free(ptr);
                printf("ListNode deleted at %d pos!\n", pos);
            }
            count++;
            temp = temp->next;
        }
        if(pos > count){
            printf("Out of list bound!\n");
        }
    }
}

void search(struct ListNode* head){
    struct ListNode *ptr;
    ptr = head;
    if(ptr == NULL){
        printf("List is empty!\n");
    }
    else{
        int item, found = 0, count = 1;
        printf("\nEnter item to search: ");
        scanf("%d", &item);
        while(ptr != NULL){
            if(ptr->data == item){
                found = 1;
                printf("Item found at %d pos!\n", count);
                break;
            }
            count++;
            ptr = ptr->next;
        }
        if(found == 0){
            printf("Item not found!\n");
        }
    }
}

int main(){
    struct ListNode *list = create_list();
    int choice;
    printf("\n\n1. Show\n2. Insert in begining\n3. Insert at end\n4. Insert at pos\n5. Delete from begining\n6. Delete from end\n7. Delete at pos\n8. Search\n9. Exit\n");
    do{
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice){  
            case 1:  
                show(list);      
                break;  
            case 2:  
                insert_begin(&list);         
                break;  
            case 3:  
                insert_end(&list);       
                break;
            case 4:
                insert_middle(&list);
                break;
            case 5:  
                delete_begin(&list);       
                break;  
            case 6:  
                delete_end(&list);        
                break;  
            case 7:
                delete_middle(&list);
                break;
            case 8:  
                search(list);         
                break;  
            case 9:  
                exit(0);  
                break;  
            default:  
                printf("Please enter valid choice..");
        }
    }
    while(choice != 9);
}
