#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int items[MAX];
int front=-1,rear=-1;
void insert(int value);
void display();
void delete();
int main()
{
    int ch;
    int callid;
    while(1)
    {
        printf("\n Enter appropriate choice \n 1.add call \n 2.remove call \n 3.display call \n 4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the caller id to add\n");
            scanf("%d",&callid);
            insert(callid);
            break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
            default:printf("Invalid choice\n");

        }
    }
}
void insert(int value)
{
    if(rear==MAX-1)
    {
        printf("\n QUEUE OVERFLOW");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        items[rear]=value;
        printf("\n CallerID added -> %d",value);
    }
}
void delete()
{
    if(front==-1)
    {
        printf("\n CALL QUEUE UNDERFLOW!");
    }
    else
    {
        printf("\n CallerID Deleted : %d",items[front]);
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
    }
}
void display()
{
    if(rear==-1)
    {
        printf("\n Call Queue in empty!!");
    }
    else
    {
        int i;
        printf("\n Calls held in the queue are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",items[i]);
        }
    }
}
