#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int f[n+2];

    f[0] = 0, f[1] = 1;
    for(int i=2 ; i<=n+1 ; i++){
        f[i] = f[i-2] + f[i-1];
    }

    // for(int i=0 ; i<=n+1 ; i++){
    //     cout << f[i] << endl;
    // }

    for(int i=1 ; i<=n ; i++){
        for(int j=i ; j<=n ; j++){
            for(int k=j ; k<=n ; k++){
                int sum = f[i] + f[j] + f[k];
                if(sum == n){
                    cout << i << " " << j << " " << k;
                    return 0;
                }
                else if(sum > n){
                    continue;
                }
            }
        }
    }
    cout << "I'm too stupid to solve this problem";
    return 0;
}