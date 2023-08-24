//1445A. Array Rearrangment
#include<stdio.h>

int main()
{
    int i,a,b,x,t,n,j,big,small,k,c=0;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%d %d",&n,&x);
        int A[n+5], B[n+5];
        for(a=0 ; a<n ; a++)//value saving a
        {
            scanf("%d",&A[a]);
        }
        for(b=0 ; b<n ; b++)//value saving b
        {
            scanf("%d",&B[b]);
        }
        for(j=0 ; j<n ; j++)//ascending a
        {
            for(k=j+1 ; k<n ; k++)
            {
                if(A[j] > A[k])
                {
                    big  = A[j];
                    A[j] = A[k];
                    A[k] = big;
                }
            }
        }
        for(j=0 ; j<n ; j++)//descending b
        {
            for(k=j+1 ; k<n ; k++)
            {
                if(A[j] < A[k])
                {
                    small = A[j];
                    A[j]  = A[k];
                    A[k]  = small;
                }
            }
        }
        for(j=0 ; j<n ; j++)
        {
            if(A[j]+B[j] <= x)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        c=0;
    }
    return 0;
}
