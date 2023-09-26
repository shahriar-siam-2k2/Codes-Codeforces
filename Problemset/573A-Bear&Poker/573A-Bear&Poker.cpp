#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int a[n+1];
    int max=0;
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        if(a[i] >= max){
            max = a[i];
        }
    }
    int c=0;
    for(int i=0 ; i<n ; i++){
        if(a[i] != max){
            int temp = a[i] * 2;
            if(temp==max){
                c++;
            }
            else{
                temp = a[i] * 3;
                if(temp==max){
                    c++;
                }
            }
        }
        else{
            c++;
        }
    }
    if(c==n){
        cout << "Yes" << endl;
    }
    else{
        cout << "No " << endl;
    }
    return 0;
}
