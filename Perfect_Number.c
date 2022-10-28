#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,n1=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
          n1=n1+i;
        }
    }
    if(n1==n)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}