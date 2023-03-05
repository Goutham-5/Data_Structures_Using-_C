
//Polynomial additon using array of structures


#include<stdio.h>
struct poly{
    int c, e;
};

//struct poly p1[20], p2[20], s[20];

void main(){
    struct poly p1[20], p2[20], s[20]; 
    int n1, n2;
    int i = 0, j = 0, k = 0;

    printf("Ente the number of terms of the first polynomial: ");
    scanf("%d", &n1);

    printf("Ente the co-efficients and exponents of the polynomial in descending order... ");
    printf("\n");
    for ( i = 0; i < n1; i++)
    {
        printf("Enter the co-efficient: ");
        scanf("%d", &p1[i].c);
        printf("Enter the exponent: ");
        scanf("%d", &p1[i].e);
    }

    printf("Ente the number of terms of the second polynomial: ");
    scanf("%d", &n2);

    printf("Ente the co-efficients and exponents of the polynomial in descending order... ");
    printf("\n");
    for ( i = 0; i < n2; i++)
    {
        printf("Enter the co-efficient: ");
        scanf("%d", &p2[i].c);
        printf("Enter the exponent: ");
        scanf("%d", &p2[i].e);
    }

    i = 0;
    j = 0;
    k = 0;
   
    while (i<n1 && j<n2)
    {
        if (p1[i].e == p2[j].e)
        {
            s[k].c == p1[i].c + p2[j].c;
            s[k].e == p1[i].e;
        }
        else if(p1[i].e > p2[j].e)
		{
			s[k].c = p1[i].c;
			s[k].e = p1[i].e;
			i++;
			k++;
		}
        else
        {
            s[k].c = p2[j].c;
			s[k].e = p2[j].e;
			j++;
			k++;
        }
    }

    while (i < n1)
    {
        s[k].c = p1[i].c;
		s[k].e = p1[i].e;
		i++;
		k++;
    }

    while (j < n2)
    {
        s[k].c = p2[j].c;
		s[k].e = p2[j].e;
		j++;
		k++;
    }

    printf("The sum of the given polynomials is...");
    for (i = 0; i < k; i++)
    {
        if (i != k-1)
        {
            printf("%dx^%d +", s[i].c, s[i].e);
        }
        else
        {
            printf("%d x^%d ", s[i].c, s[i].e);
        }
        
    }

}