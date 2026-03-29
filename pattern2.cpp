
#include<iostream>
using namespace std;

void pattern(int n){
    // for (int i =1; i <=n; i++){
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // USING WHILE LOOP
    int i=1;
    while(i<=n){
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
        
    }
}

int main(){
    int n;
    cin>> n;
    pattern(n);
}