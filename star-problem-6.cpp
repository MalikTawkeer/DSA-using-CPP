
#include<iostream>
using namespace std;

// void printStarTrangle(int n){
// 	for(int i=n-1;i<n;i--){

//           for(int j=0; j<n-i+1;j++){
//             cout<<" ";
//         }
        
//         for (int k = 0; k < 2*i+1; k++)
//         {
//             cout<<"*";
//         }

      
//         cout<<endl;
//     }
// }

// void printPattern2(int n){
//     for (int i = 0; i <= 2*n-1; i++)
//     {
//         int stars = i;
//         if(i>n) stars = 2*n-i;
//         for(int j=0; j<stars; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }

// void printPattern2(int n){
//     int start = 1;
//     for(int i = 0; i<n; i++){
//         if(i % 2 == 0) start = 1;
//         else start = 0;

//         for(int j=0; j<=i; j++){
//             cout<< start <<" ";
//             start= 1-start;
//         }
//         cout<<endl;
//     }
// }


void printPattern2(int n){

    for (int i = 0; i < n; i++)
    {
    // Numbers
    for(int j=1;j<=i;j++){
        cout<<j;
    }

    // Spaces
    for(int k=0;k<=n-i-1; k++){
        cout<<" ";
    }

    // reverse Numbers
    for(int l=i; l>=1; l--){
        cout<< l;
    }

    cout<<endl;
    }
}

int main(){
	int n;
	cout << "Enter the number of rows: "<<endl;
	cin >> n;
	printPattern2(n);
	return 0;
}


