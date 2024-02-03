#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX],top,x;
void push();
void pop();
void palin();
void display();
void main()
{
    int ch;
    top=-1;
    while(1)
    {
        printf(" 1.Push An element\n");
        printf("2.pop an element\n");
        printf("3.check if it is palindrome\n");
        printf("4.Display the stack\n");
        printf("5.Exit\n");
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:palin();break;
            case 4:display();break;
            case 5:exit(0);
            default:printf("invalid entry\n");
        }
    }
}
void push()
{
    if(top>=MAX-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        printf("Enter the value to be pushed\n");
        scanf("%d",&x);
        top++;
        s[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("The popped element is %d",s[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top>=0)
    {
        printf("The elements in the stack are\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",s[i]);
        }
    }
    else
    {
        printf("Stack is empty");
    }
}
void palin()
{
    int floor=0,ceil=top,flag=0;
    while(floor<ceil)
    {
        if(s[floor]!=s[ceil])
        {
            flag=1;
            break;
        }
        floor++;
        ceil--;
    }
    if(flag==1)
    {
        printf("The stack is not palindrome\n");
    }
    else
    {
        printf("The stack is palindrome\n");
    }

}
    
    
