#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    int prio;
    struct node *prev;
    struct node *next;
};
struct node *front=NULL, *rear=NULL, *ptr, *new;


void insert(){

    new=(struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d",&new->data);

    printf("\nEnter priority: ");
    scanf("%d",&new->prio);

    new->prev=NULL;
    new->next=NULL;

    if(front=NULL && rear==NULL){
        front=new;
        rear=new;
    }

        ptr=rear;
        while(ptr->prev != NULL && ptr->prio > new->prio){
            ptr = ptr->prev;
        }
        if(ptr->prev==NULL && ptr->prio > new->prio){
            new->next = ptr;
            ptr->prev = new;
            front=new;
        }

        else {
            new->prev = new;
                if (rear==ptr){
                    rear = new;
                    ptr->next = new;
                }
                else{
                    new->next = ptr->next;
                    ptr->next = new;
                } 
            }
}

void delete(){
    ptr = front;

    if (ptr == NULL)
    {
        printf("The Queue is empty");
    }
    else
    {
        int prior;
        printf("ENter the priority of the node to be deleted: ");
        scanf("%d", &prior);
        ptr = front;
        while (ptr->prio != prior && ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        free(ptr);
        printf("%d deleted", ptr->data);
    }
}




void display(){
    if(front==NULL){
        printf("Empty");
    }
    else{
        ptr=front;
        while(ptr!=NULL){
            printf("%d\t",ptr->data);
        }
    }
}

int main()
{
    int choice;
    while(1){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}