//158A. Next Round
#include<stdio.h>

int main()
{
    int n,k,A[55],i,j,a=0;
    scanf("%d %d",&n,&k);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=0 ; j<n ; j++)
    {
        if(A[k-1] <= A[j])
        {
            if(A[j] > 0)
            {
                a++;
            }
        }
    }
    printf("%d\n",a);
    return 0;
}
