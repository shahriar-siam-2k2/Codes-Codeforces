//1452A. Robot Program
#include<stdio.h>

int main()
{
    int x,y,t,i;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d",&x,&y);
        if(x==y)
        {
            printf("%d\n",2*x);
        }
        else
        {
            x = 2*x;
            y = 2*y;
            if(x > y)
            {
                printf("%d\n",x-1);
            }
            else
            {
                printf("%d\n",y-1);
            }
        }
    }
    return 0;
}
