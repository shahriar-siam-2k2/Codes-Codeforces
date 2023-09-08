#include <iostream>
using namespace std;
 
bool isprime(int n){
    int c=0;
    for(int p=2 ; p<=n ; p++){
        if(n%p==0){
            c++;
        }
    }
    if(c==1){
        return true;
    }
    else{
        return false;
    }
}
 
int main(){
    int n,x,y;
    cin>>n;
    for(int i=2 ; ; i++){
        x=2*i;
        if(isprime(x)){
            continue;
        }
        else{
            y=n-x;
            if(isprime(y)){
                continue;
            }
            else{
                break;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}