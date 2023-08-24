//1457A. Prison Break
#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,m,r,c,i,s;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d %d %d",&n,&m,&r,&c);
        if(n>=m)
        {
            s = abs((n+m)-(r+c));
            printf("%d\n",s);
        }
        else
        {
            s = abs((n+r)-(m+c));
            printf("%d\n",s);
        }
    }
    return 0;
}
