#include <stdio.h>
struct node
{
    int data;
    struct node *ptr;
};

void insertAtBeginning(int n,struct node* head){
    struct node temp;
    temp.data=n;
    temp.ptr=head;
    head=&temp;
}

void showLinkedList(struct node* start){
    printf("%d",start->data);
}
int main()
{


    do
    {
        struct node* newNode;

        printf("Enter an element: ");
        scanf("%d",&value);
        newNode->data=value;
        newNode->ptr=NULL;

        if(head==NULL){
            head=newNode;
            current=head;
        }
        else{
            current->ptr=newNode;
            current=newNode;
        }

        printf("Do you want to add another node? (y/n):\n");
        scanf("\n%c",&choice);


    } while (choice=='y' || choice=='Y');

    // puts("Please enter an element to insert at beginning.");
    // int n;
    // scanf("%d",n);
    // insertAtBeginning(n,head);
    // showLinkedList(head);

    puts("Printing your linked list. . .");
    struct node*temp=head;

    printf("%d",temp->data);
    
    // if(head==NULL){
    //     puts("There is no elemnt in your linked list");
    // }
    // else{
    //     while(temp->ptr!=NULL){
    //         printf("%d",temp->data);
    //         temp=temp->ptr;
    //     }
    // }

    return 0;
}