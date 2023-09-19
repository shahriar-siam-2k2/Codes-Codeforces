#include <iostream>
using namespace std;

int main(){
    int n, c=0, max1=0;
    cin >> n;

    int a[n+1];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        if(a[i]==1){
            c++;
        }
    }

    for(int i=0 ; i<n ; i++){
        int temp = c;
        for(int j=i ; j<n ; j++){
            if(a[j]==0){
                temp++;
            }
            else if(a[j]==1){
                temp--;
            }
            max1 = max(max1, temp);
        }
    }

    cout << max1;
    return 0;
}