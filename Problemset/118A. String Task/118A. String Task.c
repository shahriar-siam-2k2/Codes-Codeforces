//118A. String Task
#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,j;
    char S[105];
    scanf("%s",&S);
    l = strlen(S);
    for(j=0 ; j<l ; j++)//lowercasing charecters
    {
        if(S[j]>=65 && S[j]<=90)//Using ASCII code
        {
            S[j] = S[j]+32;
        }
    }
    for(i=0 ; i<l ; i++)
    {
        if(S[i]=='a' || S[i]=='o' || S[i]=='y' || S[i]=='e' || S[i]=='u' || S[i]=='i')
        {
            continue;
        }
        else
        {
            printf(".%c",S[i]);
        }
    }
    printf("\n");
    return 0;
}
