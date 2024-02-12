#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;
Node *root=NULL;
Node *newNode(int data)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
Node *insert(Node *node,int data)
{
    if(node==NULL)
    {
        return newNode(data);
    }
    if(data<node->data)
    {
        node->left=insert(node->left,data);
    }
    else
    {
        node->right=insert(node->right,data);
    }
    return node;
}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void preorder(Node *root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
int main()
{
    int choice,value;
    while(1)
    {
        printf("\n 1.Insert an element");
        printf("\n 2.Inorder traversal");
        printf("\n 3.Preorder traversal");
        printf("\n 4.Postorder traversal");
        printf("\n 5.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                  printf("Enter the data :");
                  scanf("%d",&value);
                  root=insert(root,value);
                  break;
            case 2:
                 printf("\n Inorder traversal:");
                 inorder(root);
                 break;
            case 3:
                 printf("\n Preorder traversal:");
                 preorder(root);
                 break;
            case 4:
                 printf("\n Postorder traversal:");
                 postorder(root);
                 break;
            case 5:exit(1);
            default:printf("Wrong choice ");
        }
    }
}

        