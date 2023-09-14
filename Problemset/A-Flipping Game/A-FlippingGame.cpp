#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int k[n+1];
    for(int i=0 ; i<n ; i++){
        cin >> k[i];
    }

    int i=0, j=0;
    for(int f=0 ; f<n ; f++){
        if(k[f]==0){
            i=f;
            break;
        }
    }
    for(int f=n ; f>=0 ; f--){
        if(k[f]==0){
            j=f;
            break;
        }
    }

    for(i ; i<=j ; i++){
        if(k[i]==0){
            k[i] = 1;
        }
        else if(k[i]==1){
            k[i] = 0;
        }
    }

    int c=0;
    for(int f=0 ; f<n ; f++){
        if(k[f]==1){
            c++;
        }
    }
    cout << c;
    return 0;
}