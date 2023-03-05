    //  Palindrome check using Doubly



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* structure definition
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node{
    char ch;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;
struct node *tail=NULL;

void insert_first(char c){
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->ch=c;
    new->prev=NULL;
    new->next=NULL;
    head=new;
    tail=new;
}
void insert_rest(char c){
     struct node *new=(struct node*)malloc(sizeof(struct node));
     new->ch=c;
     new->prev=tail;
     new->next=NULL;
     tail->next=new;
     tail=new;
}
void palindrome(){
    struct node *ptr=head;
    struct node *ptr1=tail;
    int flag=0;
    while(ptr!=NULL){
        if(ptr->ch!=ptr1->ch){
            flag=1;
            break;
        }
        ptr=ptr->next;
        ptr1=ptr1->prev;
    }
    if(flag==0){
        printf("palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}
int main()
{
    char character;
    printf("Enter the string: ");
    while((character=getchar())!='\n'){
        if(head==NULL){
            insert_first(character);
        }
        else{
            insert_rest(character);
        }
    }
    palindrome();
    return 0;
}
} */

struct node{
    char ch;
    struct node *prev, *next;   
};

struct node *head = NULL;
struct node *tail = NULL;

void first_Insert(char c){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->ch = c;
    newNode->prev = NULL;
    newNode->next = NULL;
    head = newNode;
    tail = newNode;
}

void after_first(char c){

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    /*  Wrong Algo
     newNode->ch = c;
    newNode->prev = head;
    head->next = newNode;
    newNode->next = NULL;
    tail = newNode; 
    */
    newNode->ch = c;
    newNode->prev = tail;
    tail->next = newNode;
    newNode->next = NULL;
    tail = newNode;

}

void palindrome(){
    struct node *ptr = head;
    struct node *ptr1 = tail;
    int f = 1;

    while (ptr->next != NULL)
    {
        //  warning: comparison between pointer and integer
        if (strcmp(&ptr->ch, &ptr1->ch) != 0)
        {
            f = 0;
            break;
        }

        /* if (ptr->ch != ptr1->ch)
        {
            f = 0;
            break;
        } */

        ptr = ptr->next;
        ptr1 = ptr1->prev;
    }
        if (f == 0)
        {
            printf("The entered String is not palindrome");
        }
        else
        {
            printf("The entered String is palindrome");
        } 
}

void main(){
    char character;
    printf("Enter the string: ");
    while((character = getchar()) != '\n');
    {
        if (head == NULL)
        {
            first_Insert(character);
        }
        else
        {
            after_first(character);
        }
    }
    palindrome();
}