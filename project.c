#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int front=-1;
int rear=-1;
int count=0;
struct list{
    int Employ_id;
    char Employ_name[20];
    float Employ_salary ;
    int age;
    long phone_number;
     struct list *next;
}*q=NULL,*node=NULL, *p=NULL,*start=NULL;
void display();
// void edit_details();
 void search();
// void delete();

int main()
{
    int n ;

    while(n!=0)
    {
    printf ("\t\t\t\t\tEMPLOYEE DETAIL CHARD\n\n");
    printf("\t\t\t\t\t\tMAIN MENU\n\n\n");
    printf("\t\t\t\t\t\t1). Add employee record.\n");
    printf("\t\t\t\t\t\t2). List of all Employees.\n");
    printf("\t\t\t\t\t\t3). Search an employee details.\n");
    printf("\t\t\t\t\t\t4). Edit in employees detail.\n");
    printf("\t\t\t\t\t\t5). Delete record of  employee.\n");
    printf("\t\t\t\t\t\t6). exit.\n\n\n\n");
    printf("\t\t\t\t\t\tEnter your choice\n\t\t\t\t\t\t");
    scanf("%d",&n);
    
    switch(n)
    {
       case 1:
               count=count+1;
               node=(struct list*)malloc(sizeof(struct list));  
               printf("\t\t\t\t\tEnter employee ID no.\n\t\t\t\t\t");
               scanf("%d",&node->Employ_id);
               printf("\t\t\t\t\tEnter name of Employee\n\t\t\t\t\t");
               fflush(stdin);
               gets(node->Employ_name);
               printf("\t\t\t\t\tEnter salaary of employee\n\t\t\t\t\t");
               scanf("%f",&node->Employ_salary);
               printf("\t\t\t\t\tEnter age of employee\n\t\t\t\t\t");
               scanf("%d",&node->age);
               printf("\t\t\t\t\tEnter phone number of employee\n\t\t\t\t\t");
               scanf("%lu",&node->phone_number);
               node->next=NULL;

               if(front==-1)
               {
                  front=0;
                  rear=0;
                  start=node;
                  p=node;
               }
               else
                {
                   p->next=node;
                   p=node;
                   rear=rear+1;
               }
             break;



        case 2:
              
               display(start);
               break;

        case 3:
                printf("\t\t\t\t\tEnter Employee id=\n");
                scanf("%d",&n);
                search(n);
                break;

        
        case 4:
                printf("\t\t\t\t\tEnter Employee id=\n");
                scanf("%d",&n);
                edit_details (n);
                break;        
       
        case 5:
               printf("\t\t\t\t\tEnter Employee id=\n");
               scanf("%d",&n);
               delete(n);
               break;

        case 6:
              exit(0);

        default:
             exit(0);
               
    }
    printf("\t\t\t\t\t---------------><----------\n\n");
    }

}


void display(struct list *q)
{
    q=start;
    if(q!=NULL)
    {
    while(q!=NULL)
    {
        printf("\t\t\t\t\t%d\t",q->Employ_id);
        fflush(stdin);
        puts(q->Employ_name);
        printf("%f\t",q->Employ_salary);
        printf("%d\t",q->age);
        printf("%lu\n",q->phone_number);
        q=q->next;
    }
    }
    else{
        printf("\t\t\t\t\tNo record right now!!\n");
    }

}


void search(int i)
{
    int temp=0;
    q=start;
    while(q!=NULL)
    {
     if(q->Employ_id==i)
    {
         printf("\t\t\t\t\tRequired detail of this employee is\n");
         printf("\t\t\t\t\t%d\t",q->Employ_id);
         fflush(stdin);
         puts(q->Employ_name);
         printf("%f\t",q->Employ_salary);
         printf("%d\t",q->age);
         printf("%lu\n",q->phone_number);
       break;  
    }
    else
    {
        q=q->next;
    }
   } 
   if(q==NULL)
   {
        printf("\t\t\t\t\tEmployee having this id no. not found\n");
   }
}


void edit_details(int i)
{
    int temp;
    q=start;
    while(q!=NULL)
  {
    if(i==q->Employ_id)
    {    
             printf("\t\t\t\t\tEnter 1 for changing name of Employee.\n");
             printf("\t\t\t\t\tEnter 2 for changing employee salary\n");
             printf("\t\t\t\t\tEnter 2 for changing employee age\n");
             printf("\t\t\t\t\tEnter 2 for changing phone number\n");
             scanf("%d",&temp);
     switch(temp)
        {
            case 1:
                    printf("\t\t\t\t\tName of employee\n");
                    fflush(stdin);
                    gets(q->Employ_name);
                    break;

            case 2:    
                   printf("\t\t\t\t\tsalary of employee\n");
                   scanf("%f",&q->Employ_salary);
                   break;

            case 3:
        
                   printf("\t\t\t\t\tsalary of employee\n");
                   scanf("%d",&q->age);
                   break;

            case 4:
                   printf("\t\t\t\t\tPhone number of employee\n");
                   scanf("%lu",&q->phone_number);
                   break;

            default:
                   printf("\t\t\t\t\tWrong choice\n");
        }
    }
    else
    {
        q=q->next;
    }
  }
  if(q==NULL)
  {
      printf("\t\t\t\t\tWrong choice\n");
  }


}



void delete( int i)
{
    q=start;
    p=q->next;
    while(q!=NULL)
    {
        if(p->Employ_id==i)
        {
            q->next=p->next;
            free(p);
        }
        else
        {
            q=q->next;
            p=q->next;
        }
    }
    if(q==NULL)
    {
        printf("\t\t\t\t\tNo employee found with this ID number\n");
    }
    
}