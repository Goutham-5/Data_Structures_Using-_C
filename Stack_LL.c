/* #include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* top = NULL;

struct node* Push()
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element to be pushed into the stack:");
    scanf("%d",&new->data);
    new->next = top;
    top = new;
    return top;

}

struct node* Pop()
{
    if(top == NULL)
    {
        printf("\n*****STACK UNDERFLOW*****\n");
        return top; 
    }
    else
    {
        struct node* temp = top;
        printf("\nElement being popped is %d",temp->data);
        top = top->next;
        free(temp);
    }
    return top;
}

void Display()
{   
    if(top==NULL)
    {
        printf("\n*****EMPTY STACK*****\n");
    }
    else
    {
        printf("\nStack elements:\n");
        for(struct node* i = top; i != NULL; i=i->next)
        {
            printf("%d\t",i->data);
        }
    }
    
}

int main()
{   
    int flag = 0,choice;
    printf("\n*****IMPLEMENTATION OF STACK USING LINKED LISTS*****\n");
    
    while(flag==0)
    {
        printf("\n-----------------------------------------------------\n");
        printf("\nEnter your choice:\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\nChoice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                top=Push(top);
                break;
            }
            case 2:
            {
                top=Pop(top);
                break;
            }
            case 3:
            {
                Display(top);
                break;
            }
            case 4:
            {
                flag=1;
                break;
            }
            default:
            {
                printf("\nINVALID CHOICE\n");
                break;
            }
        }
    }
    return 0;
} */


/* 
#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}   */