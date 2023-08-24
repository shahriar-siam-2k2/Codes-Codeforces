//535A. Tavas and Nafas
#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    if(n==0)
    {
        printf("zero");
    }
    else if(n==1)
    {
        printf("one");
    }
    else if(n==2)
    {
        printf("two");
    }
    else if(n==3)
    {
        printf("three");
    }
    else if(n==4)
    {
        printf("four");
    }
    else if(n==5)
    {
        printf("five");
    }
    else if(n==6)
    {
        printf("six");
    }
    else if(n==7)
    {
        printf("seven");
    }
    else if(n==8)
    {
        printf("eight");
    }
    else if(n==9)
    {
        printf("nine");
    }
    else if(n==10)
    {
        printf("ten");
    }
    else if(n==11)
    {
        printf("eleven");
    }
    else if(n==12)
    {
        printf("twelve");
    }
    else if(n==13)
    {
        printf("thirteen");
    }
    else if(n==14)
    {
        printf("fourteen");
    }
    else if(n==15)
    {
        printf("fifteen");
    }
    else if(n==16)
    {
        printf("sixteen");
    }
    else if(n==17)
    {
        printf("seventeen");
    }
    else if(n==18)
    {
        printf("eighteen");
    }
    else if(n==19)
    {
        printf("nineteen");
    }

    else if(n>=20)
    {
        if(n>=20 && n<30)
        {
            printf("twenty");
        }
        else if(n>=30 && n<40)
        {
            printf("thirty");
        }
        else if(n>=40 && n<50)
        {
            printf("forty");
        }
        else if(n>=50 && n<60)
        {
            printf("fifty");
        }
        else if(n>=60 && n<70)
        {
            printf("sixty");
        }
        else if(n>=70 && n<80)
        {
            printf("seventy");
        }
        else if(n>=80 && n<90)
        {
            printf("eighty");
        }
        else if(n>=90 && n<100)
        {
            printf("ninety");
        }

        a = n%10;
        if(a==1)
        {
            printf("-one");
        }
        else if(a==2)
        {
            printf("-two");
        }
        else if(a==3)
        {
            printf("-three");
        }
        else if(a==4)
        {
            printf("-four");
        }
        else if(a==5)
        {
            printf("-five");
        }
        else if(a==6)
        {
            printf("-six");
        }
        else if(a==7)
        {
            printf("-seven");
        }
        else if(a==8)
        {
            printf("-eight");
        }
        else if(a==9)
        {
            printf("-nine");
        }
    }
    return 0;
}