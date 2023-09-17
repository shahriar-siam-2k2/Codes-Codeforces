#include <iostream>
using namespace std;

int main(){
    int n, fc=0;
    cin >> n;

    int a[n+1];
    //int temp[n+1];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }

    for(int i=0 ; i<n ; i++){
        // for(int k=0 ; k<n ; k++){
        //     temp[k] = a[k];
        // }
        int c=0;
        for(int j=i ; j<n ; j++){
            for(int k=j-1 ; k>=0 ; k--){
                if(a[k] = 1){
                    c++;
                }
            }
            if(a[j] == 0){
                c++;;
            }
        }
        // for(int k=0 ; k<n ; k++){
        //     if(a[k] == 1){
        //         c++;
        //     }
        // }
        if(fc <= c){
            fc = c;
        }
    }
    cout << fc;
    return 0;
}