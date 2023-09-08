#include <iostream>
using namespace std;

bool conjTest(int n){
    int c=0;
    for(int p=2 ; p<=n ; p++){
        if(n%p==0){
            c++;
        }
    }
    if(c==1){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=4 ; i<=n ; i++){
        if(conjTest(i)==1){
            for(int j=4 ; j<=n ; j++){
                if(conjTest(j)==1){
                    int sum = i+j;
                    if(sum==n){
                        cout << i << " " << j;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}