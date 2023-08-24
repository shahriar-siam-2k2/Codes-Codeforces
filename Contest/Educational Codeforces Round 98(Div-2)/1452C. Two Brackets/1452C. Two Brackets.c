//1452C. Two Brackets
#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,t,n1,n2,l;
    char C[200005];
    scanf("%d",&t);
    for(i=0 ; i<t ;  i++)
    {
        n1=0, n2=0, k=0;
        scanf("%s",&C);
        l = strlen(C);
        for(j=0 ; j<l ; j++)
        {
            if(C[j]=='(')
            {
                n1++;
            }
            else if(C[j]=='[')
            {
                n2++;
            }
            else if(C[j]==')')
            {
                if(n1 > 0)
                {
                    n1--;
                    k++;
                }
            }
            else if(C[j]==']')
            {
                if(n2 > 0)
                {
                    n2--;
                    k++;
                }
            }
        }
        printf("%d\n",k);
    }



    return 0;
}
