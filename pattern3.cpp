
#include<iostream>
using namespace std;
// 1111
// 222
// 33
// 4
void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>> n;
    pattern(n);
}