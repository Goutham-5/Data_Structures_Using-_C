
    // Sum of polynomial containing 2 variables using LL
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int coeff, xpow, ypow;
    struct node *next;
}type;

type *head, *temp, *ptr;

type *createPoly(){
    int n, x, y, c;

    head = (type*)malloc(sizeof(type));
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);
}

