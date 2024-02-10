#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

Node *top=NULL;

void push(int item);
int pop();
int peek();
void display();

int main()
{
    int choice,item;
    while(1)
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the item to be pushed : ");
            scanf("%d",&item);
            push(item);
            break;
            case 2:
            item=pop();
            if(item!=-1)
            {
                printf("Popped item is : %d\n",item);
            }
            break;
            case 3:
            item=peek();
            if(item!=-1) // Corrected here
            {
                printf("The top item is:%d\n",item);
            }
            break;
            case 4:display();break;
            case 5:exit(0);
            default : printf("Invalid choice\n");
        }
    }
    return 0;
}

void push(int item)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->data=item;
    temp->next=top;
    top=temp;
}

int pop()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    Node *temp=top;
    top=top->next;
    int item=temp->data;
    free(temp);
    return item;
}

int peek()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

void display()
{
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    Node *temp=top;
    printf("Stack: ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
