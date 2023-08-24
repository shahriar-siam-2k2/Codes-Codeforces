//71A.Way Too Long Words
#include<stdio.h>
#include<string.h>

int main()
{
    char s[105];
    int l,n,i;
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        scanf("%s",&s);
        l = strlen(s);
        if(l<=10)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
    }
    return 0;
}
