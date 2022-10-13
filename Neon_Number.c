#include<stdio.h>
int main()
{
    int n,sq,s=0,rem;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        rem=sq%10;
        s=s+rem;
        sq=sq/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
       printf("Not Neon Number");
    }
}