#include <iostream>
using namespace std;

int main(){
    int n, k, sum=0, c=0, max=-1;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> k;
        if(k==0){
            sum++;
        }
        else if(k==1){
            sum--;
            c++;
        }

        if(sum < 0){
            sum=0;
        }
        else if(sum > max){
            max = sum;
        }
    }
    cout << max + c;
    return 0;
}