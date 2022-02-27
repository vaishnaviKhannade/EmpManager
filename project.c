#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int front=-1;
int rear=-1;
struct list{
    int Employ_id;
    char Employ_name[20];
    float Employ_salary ;
    int age;
    long phone_number[12];
    void struct *next;
};
void display();
void edit_details();
void adding_employ();
void search();
void delete();

int main()
{
    int n,i;
    struct list *node=NULL, *p=NULL,*start=NULL,;
    printf ("\t\t\t\t\tEMPLOYEE DETAIL CHARD\n\n\n\n");
    printf("\t\t\t\t\t\tMAIN MENU\n\n\n\n");
    printf("\t\t\t\t\t\t1). Add employee record.\n");
    printf("\t\t\t\t\t\t2). List of all Employees.\n");
    printf("\t\t\t\t\t\t3). Search an employee details.\n");
    printf("\t\t\t\t\t\t4). Edit in employees detail.\n");
    printf("\t\t\t\t\t\t5). Delete record of  employee.");
    printf("\t\t\t\t\t\t6). exit.\n\n\n\n\t\t\t\t\t");
    printf("\t\t\t\t\t\tEnter your choice\n\n");
    scanf("%d",&n);
    switch(n)
    {
       case 1:
               
    }

}