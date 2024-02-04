#include<stdio.h>
void toh(int n,char source,char space,char dest);
static int step=0;
int main()
{
    int n;
    printf("\n Enter the number of rings:");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}
void toh(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("\n Step %d:Move %d from %c to %c",++step,n,A,C);
    }
    else
    {
        toh(n-1,A,C,B);
        toh(1,A,B,C);
        toh(n-1,B,A,C);
    }
}