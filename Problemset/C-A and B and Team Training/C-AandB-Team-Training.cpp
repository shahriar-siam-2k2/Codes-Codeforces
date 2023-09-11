#include <iostream>
using namespace std;

int main(){
    long long int xp, nb;
    cin >> xp >> nb;
    int t=0;
    while(xp>0 && nb>0){
        if(xp <= nb){
            if(xp<=1 && nb<=1){
                break;
            }
            else{
                nb = nb - 2;
                xp--;
                t++;
            }
        }
        else if(xp > nb){
            xp = xp - 2;
            nb--;
            t++;
        }
    }
    cout << t;
    return 0;
}