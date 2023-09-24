#include <iostream>
#include <string.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        string w;
        cin >> w;
        int size = w.size();
        if(size > 10){
            cout << w[0] << size-2 << w[size-1] << endl;
        }
        else{
           cout << w << endl;
        }
    }
    return 0;
}