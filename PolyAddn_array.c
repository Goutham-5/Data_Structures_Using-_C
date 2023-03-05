
//Polynomial additon using array of structures... using function

#include<stdio.h>
struct poly{
    int c, e;
};
int main(){
    struct poly p[20], p1[20], p2[20], s[20];
    int n1, n2, n3;
    n1 = readpoly(p1);
    printf(" \n First polynomial : ");
    display(p1, n1);

    n2 = readpoly(p2);
    printf(" \n Second polynomial : ");
    display(p2, n2);

    printf(" \n The sum of the given polynomials is : ");
    n3 = add(p1, p2, n1, n2, s);
    display(s, n3);

    return 0;
}


void readpoly(struct poly p[20]){
    int n, i;

    printf("Ente the number of terms of the polynomial: ");
    scanf("%d", &n);

    printf("Ente the co-efficients and exponents of the polynomial in descending order... ");
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        printf("Enter the co-efficient: ");
        scanf("%d", &p[i].c);
        printf("Enter the exponent: ");
        scanf("%d", &p[i].e);
    }
    return n;
}

int display(struct poly p[20], int terms){
    int i;
    for (i = 0; i < terms; i++)
    {
        printf("%dx^%d + ", p[i].c, p[i].e);
    }
    return 0;
}

int add(struct poly poly1[20],struct poly poly2[20],int n1,int n2, struct poly poly3[20]){
    int i, j, k = 0;
    while (i<n1 && j<n2)
    {
        if (poly1[i].e == poly2[j].e)
        {
            poly3[k].c == poly1[i].c + poly2[j].c;
            poly3[k].e == poly1[i].e;
        }
        else if(poly1[i].e > poly2[j].e)
		{
			poly3[k].c = poly1[i].c;
			poly3[k].e = poly1[i].e;
			i++;
			k++;
		}
        else
        {
            poly3[k].c = poly2[j].c;
			poly3[k].e = poly2[j].e;
			j++;
			k++;
        }
    }

    while (i < n1)
    {
        poly3[k].c = poly1[i].c;
		poly3[k].e = poly1[i].e;
		i++;
		k++;
    }

    while (j < n2)
    {
        poly3[k].c = poly2[j].c;
		poly3[k].e = poly2[j].e;
		j++;
		k++;
    }

    return k;
}