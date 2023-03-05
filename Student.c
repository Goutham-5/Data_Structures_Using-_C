
// Student Program

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    int roll;
    char Name[20];
    float marks;
    struct student *next;
}stud;

stud *create(){
    int roll;
    float marks;
    char name[20];
    printf("Enter the roll number : ");
	scanf("%d",&roll);
	printf("Enter name of student : ");
	scanf("%s",name);
	printf("Enter the marks : ");
	scanf("%f",&marks);
}

