#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
    char name[50];
    int id;
    char dept[50];
    float sal;
};

void depsal(struct emp *ptr,int n);

void main()
{
    struct emp *ptr;
    int i,n;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    ptr=(struct emp*)malloc(n*sizeof(struct emp));
    printf("Enter the employee details for %d employee\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the name of %d Employee : ",i+1);
        scanf("%s",(ptr+i)->name);
        printf("\nEnter the id of %d Employee : ",i+1);
        scanf("%d",&((ptr+i)->id));
        printf("\nEnter the dept of %d Employee : ",i+1);
        scanf("%s",(ptr+i)->dept);
        printf("\nEnter the sal of %d Employee : ",i+1);
        scanf("%f",&((ptr+i)->sal));
    }
    printf("The details of the employee %d are \n",n);
    for(i=0;i<n;i++)
    {
        printf("Employee %d name : %s \n",i+1,(ptr+i)->name);
        printf("Employee %d id : %d \n",i+1,(ptr+i)->id);
        printf("Employee %d dept : %s \n",i+1,(ptr+i)->dept);
        printf("Employee %d sal : %.2f \n",i+1,(ptr+i)->sal);
    }
    depsal(ptr,n);
}

void depsal(struct emp *ptr,int n)
{
    int i;
    char d[50];
    float tot=0;
    printf("Enter the department name\n");
    scanf("%s",d);
    for(i=0;i<n;i++)
    {
        if(strcmp((ptr+i)->dept,d) == 0)
        {
            tot=tot+((ptr+i)->sal);
        }
    }
    printf("The total salary of %s department is %.2f\n",d,tot);
}
