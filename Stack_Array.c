

    //  Stack using Array

#include<stdio.h>
int stack[20], top , n, val, i;

void push(){
    
    if(top < n-1)
    {
        printf("Enter the value to be pushed: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
    else
    {
        printf("\n...STACK OVERFLOW...\n");
    }
}

void pop(){
    if (top <= -1)
    {
        printf("\n...STACK UNDERFLOW...\n");
    }
    else
    {
        printf("%d Popped", stack[top]);
        top--;
    }

}

void display(){
    if(top >= 0)
    {
        printf("\nThe elements in the STACK are...\n");
        for (i = top; i >= 0 ; i--)
        {
            printf("%d\t",stack[i]);
        }
    }
    else
    {
        printf("\n...STACK EMPTY...\n");
    }
    
}

void main(){
    top = -1;
    int choice;
    printf("Enter ths stack size: ");
    scanf("%d", &n);
    stack[n];
    int flag = 1;
    while (flag == 1)
    {
        printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
        printf("Choose the operation to be performed: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;
        
        case 4:
            printf("...EXIT CONDITION...");
            flag = 0;
            break;
        
        default:
            printf("...Invalid Choice...");
            break;
        }
    }
    
}
