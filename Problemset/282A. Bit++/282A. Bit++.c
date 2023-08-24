//282A. Bit++
#include<stdio.h>
#include<string.h>

int main()
{
    int N,n=0,i;
    char X[8];
    scanf("%d",&N);
    for(i=0 ; i<N ; i++)
    {
        scanf("%s",&X);
        if(strcmp("X++",X)==0 || strcmp("++X",X)==0)
        {
            n++;
        }
        else if(strcmp("--X",X)==0 || strcmp("X--",X)==0)
        {
            n--;
        }
    }
    printf("%d\n",n);
    return 0;
}
