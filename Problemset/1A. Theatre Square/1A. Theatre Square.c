//1A. Theatre Square
#include<stdio.h>
#include<math.h>

int main()
{
    double n,m,a;
    long long int f;
    scanf("%lf %lf %lf",&n,&m,&a);
    f = ceil(n/a) * ceil(m/a);
    printf("%lld\n",f);
    return 0;
}
