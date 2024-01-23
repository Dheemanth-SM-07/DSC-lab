#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert();
void delete();
int a[50],n;
int main()
{
    int ch;
    while(1)
    {
       printf("\n Select the given choices\n");
       printf("1.Create the array\n");
       printf("2.Display the array\n");
       printf("3.insert element into the array\n");
       printf("4.Delete element from the array\n");
       printf("5.Exit\n");
       printf("Enter your Choice\n");
       scanf("%d",&ch);
       switch(ch)
       {
        case 1:create();break;
        case 2:display();break;
        case 3:insert();break;
        case 4:delete();break;
        case 5:exit(0);break;
        default:printf("Invalid choice\n");
       }
    }
    return 0;
}
void create()
{
    int i;
    printf("Enter the number of elements to br present in an array \n");
    scanf("%d",&n);
    printf("Enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    
}
void display()
{
    int i;
    printf("the inputed array is ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void insert()
{
    int i,p,el;
    printf("Enter the postion at which the element should be inserted = ");
    scanf("%d",&p);
    printf("Enter the element to be inserted = ");
    scanf("%d",&el);
    for(i=n-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=el;
    n++;
}
void delete()
{
    int i,p;
    printf("Enter the postion at which the element should be deleted = ");
    scanf("%d",&p);
    for(i=p;i<=n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
}
