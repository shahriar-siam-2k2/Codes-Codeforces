//1451A. Subtract or Divide
#include<stdio.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("0\n");
        }
        else if(n==2)
        {
            printf("1\n");
        }
        else if(n==3)
        {
            printf("2\n");
        }
        else if(n%2==0)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}
