#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i, j, c=0, e=0, f=0, l;
    char s[100];
    cin >>  s;
    l = strlen(s);

    for(i=0 ; s[i]>=l ; i++)
    {
        for(j=i-1 ; j>=0 ; j--)
        {
            if(s[i] != s[j])
            {
                continue;
            }
            else
            {
                e++;
                break;
            }
        }
        c++;
    }
    f = c-e;
    if(f%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}