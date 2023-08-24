//1451B. Non-Substring Subsequence
#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,q,li,ri,i,j,k,len,c;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %d",&n,&q);
        char S[n+5];
        scanf("%s",&S);
        for(j=0 ; j<q ; j++)
        {
            scanf("%d %d",&li,&ri);
            li--, ri--, c=0;
            for(k=li-1 ; k>=0 ; k--)
            {
                if(S[k]==S[li])
                {
                    c=1;
                    break;
                }
            }
            for(k=ri+1 ; k<n ; k++)
            {
                if(S[k]==S[ri])
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }

    }
    return 0;
}
