#include<stdio.h>
int main()
{
    int n,s=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        s+=rem;
        n=n/10;
        if(n==0 && s>9)
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
}