
#include<iostream>
using namespace std;

void pattern(int n){

    // for(int i=0; i<n; i++){
    //     for(int j=0;j<n; j++){
    //         cout << "* ";
    //     }

    //     cout<<endl;
    // }

    int i=0;
    while (i<n)
    {
        int j=0;
        while (j<n)
        {
            cout<<"*";
            j++;
        }

        i++;
        cout<<endl;
        
    }
    

}

int main(){
    int n;
    cin>> n;
    pattern(n);
}