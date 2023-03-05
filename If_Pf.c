
#include<stdio.h>
#include<math.h>

char stack[20];
int top=-1;

void push(char x){
    stack[++top]=x;
}

char pop(){
    if(top==-1){
        return -1;
    }
    else{
        return stack[top--];
    }
}

int priority(char x){
    if(x=='(')
        return 0;
    if(x=='+'||x=='-')
        return 1;
    if(x=='*'||x=='/')
        return 2;
    if(x=='^')
        return 3;
}

void main(){
    char exp[20];
    char *e, x;
	//int num, n1, n2, n3;
    printf("Enter expression: ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
                push(*e);
        }
        else if(*e==')'){
            while((x=pop())!='('){
                    printf("%c",x);
                  }
        }
        else{
             while(priority(stack[top])>=priority(*e)){
                    printf("%c",pop());
                    }
             push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }

	int num, n1, n2, n3;
	char exp1[20];
	char *e1, x1;
	printf("Enter the postfix expression: ");
	scanf("%s",exp1);
	e1 = exp1;
	while(*e1 != '\0')
    {
        if(isdigit(*e1))
        {
            num = *e1 - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e1)
            {
            case '+':
            {
                n3 = n2 + n1;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n2 * n1;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of expression =  %d\n",pop());
	
}

/* int sum(){

	char exp[20];
	printf("Enter the postfix expresion: ");
	scanf("%s", exp);
	char *e;
	int num, n1, n2, n3;
	e = exp;
	while (*e != '\n')
	{
		if (isdigit(*e))
		{
			push(*e);
		}
		else{
			n2 = pop();
			n1 = pop();
			switch(*e){
				case '+':
					n3 = n1+n2;
					break;
				case '-':
					n3 = n1-n2;
					break;
				case '/':
					n3 = n1/n2;
					break;
				case '*':
					n3 = n1*n2;
					break;
				case '^':
					n3 = pow(n1, n2);
					break;
			}
			push(n3);
		}
		e++;
	}
	return(n3);
}

 */