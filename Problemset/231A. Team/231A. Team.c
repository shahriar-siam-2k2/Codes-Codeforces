//231A. Team
#include<stdio.h>

int main()
{
    int i,n,x,y,z,N=0;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x==1 && y==1 || y==1 && z==1 || z==1 && x==1)
        {
            N++;
        }
    }
    printf("%d\n",N);
    return 0;
}
