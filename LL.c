//  C Program to perform Linked List Operations

#include<stdlib.h>
#include<stdio.h>

struct LL
{
    int data;
    struct LL *next;
};

struct LL *head, *newnode, *temp;
struct LL *head = NULL;

int length(){
    int count = 0;

    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("The number of nodes in the given Linked List is: %d", count);   
    return count;
}

void display(){
    temp = head;
    if (temp == NULL)
    {
        printf("Empty List...");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

void InsertBeg(){
    newnode = (struct LL *)malloc(sizeof (struct LL));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = head->next;
    head = newnode;
    display();
}

void InsertEnd(){
    newnode = (struct LL *)malloc(sizeof (struct LL));
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    display();
}

void InsertPos(){
    //  Position is meant to be a value greate than 1 (since we have InsertBeg() for insertion at the first position...)
    int len = length(), i = 1;
    int position;
    printf("Enter the position to insert the node: ");
    scanf("%d",&position);

    if (position > len || position < 1)
    {
        printf("Invalid Position..");
    }
    else if (position == 1)
    {
        InsertBeg();
    }
    else if (position == 2)
    {
        temp = temp->next;
        newnode = (struct LL *)malloc(sizeof (struct LL));
        printf("Enter the data: ");
        scanf("%d",&temp->data);
        newnode->next = temp -> next;
        temp->next = newnode;
        printf("New Node inserted...");
    }
    else
    {
        temp = head;
        while (i < position-1)      //We just have to traverse till the previous node of the mentioned position
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct LL *)malloc(sizeof (struct LL));
        printf("Enter the data: ");
        scanf("%d",&temp->data);
        newnode->next = temp -> next;
        temp->next = newnode;
        printf("New Node inserted...");    
    }
    display();
}

void DeleteBeg(){
    temp = head;

    if (temp == NULL)
    {
        printf("List Empty...");
    }
    else
    {
        temp = temp->next;
        head->next = temp->next;
        //int x = temp->data;
        printf("%d deleted",temp->data);
        free(temp);
    }
    display();
}

void DeleteEnd(){
    temp = head;
    struct LL *prev;
    if (temp == NULL)
    {
        printf("List Empty...");
    }
    else
    {
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        //int x = temp->data;
        printf("%d deleted",temp->data);
        free(temp);
    }
    display();
}

void DelPos(int position){

    int len = length(), i = 1;
    int position;
    printf("Enter the position of the node to be deleted: ");
    scanf("%d",&position);
    temp = head;
    if (temp == NULL)
    {
        printf("List Empty..");
    }
        //  Position is meant to be a value greate than 1 (since we have DelBeg() for Deletion at the first position...)
    else if (position > len || position < 1)
    {
        printf("Invalid Position..");
    }
    else if (position == 1)
    {
        DeleteBeg();
    }
    else if (position = len)
    {
        DeleteEnd();
    }
    else
    {
        temp = head;
        while (i < position-1)      //We just have to traverse till the previous node of the mentioned position
        {
            temp = temp->next;
        }
        struct LL *pos = temp->next;
        free(pos);
        temp->next = NULL;
        printf("Node deleted...");    
    }
    display();
}

void main(){
    int f = 0;
    while (f == 0)
    {
        printf("Enter your choice...");
        printf( "\n1.Length of the Linked List\n2.Insertion at the Beginning\n3.Insertion at the end\n4.Insertion at the given position\n5.Deletion at the Beginning\n6.Deletion at the end\n7.Deletion at the given position\n8.Exit");
    }
    int choice;
    printf("Enter your Choice (1 to 8):");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        length();
        break;
    case 2:
        InsertBeg();
        break;
    case 3:
        InsertEnd();
        break;
    case 4:
        InsertPos();
        break;
    case 5:
        DeleteBeg();
        break;
    case 6:
        DeleteEnd();
        break;
    case 7:
        D();
        break;
    case 8:
        f = 1;
        break;
    default:
        printf("Invalid Option...");
        break;
    }
}
