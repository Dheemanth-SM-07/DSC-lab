#include<stdio.h>
#define MAX 3

struct circularqueue
{
    int data;
}
struct circularqueue queue[MAX_SIZE];
int front=-1,rear=-1;
void insert(int value);
int delete();
void display();
int main()
{
    int choice,value;
    while(1)
    {
        printf("1.Insert element into the circular queue\n");
        printf("2.Delete element from the circular queue\n");
        printf("3.Display the circular queue\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice)
        switch(choice)
        {
            case 1:
                  printf("Enter the value to be inserted\n");
                  scanf("%d",&value);
                  insert(value);
                  break;
            case 2:
                 value=delete();
                 if(value!=-1)
                 {
                    printf("The deleted element is : %d\n",value);
                 }
                 break;
            case 3:
                  display();
                  break;
            case 4:
                exit(0);
                break;
            default:
                 printf("Invalid choice\n");
                 break;
        }
    }
    return 0;
}
void insert(int value)
{
    if(front==0 && rear==MAX_SIZE-1)
    {
        printf("circular Queue overflow\n");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else
    {
        rear=(rear+1)%MAX_SIZE;
    }
    queue[rear].data=value;
}
int delete()
{
    int value;
    if(front==-1)
    {
        printf("Circular queue underflow\n");
        return -1;
    }
    value=queue[rear].data;
    if(front==rear)
    {
      front=rear=-1;
     }
     else
     {
        front=(front+1)%MAX_SIZE;
     }
     return value;
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\n Empty Queue\n");
    }
    else{
        printf("\n front-> %d",front);
        printf("\n items-> ");
        for(i=front;i!=rear;i=(i+1)%MAX_SIZE)
        {
            printf("%d",queue[i].data);
        }
        printf("%d",queue[i].data);
        printf("\n Rear -> %d \n",rear);
    }

}