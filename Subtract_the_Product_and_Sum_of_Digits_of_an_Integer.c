#include<stdio.h>
int main()
{
    int n,d,rem,s=0,p=1;
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        s=s+rem;
        p=p*rem;
        n=n/10;
    }
    d=p-s;
    printf("%d",d);
}