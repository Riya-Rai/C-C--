// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n "<<endl;
//     cin>>n;                          //for n=4
//     int i=1;                           * * * *
//     while(i<=n){                       * * * *
//         int j=1;                       * * * *
//         while(j<=n){                   * * * *
//             cout<<" * ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" "<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}


// for n=5
//  1  1  1  1  1 
//  2  2  2  2  2 
//  3  3  3  3  3 
//  4  4  4  4  4 
//  5  5  5  5  5 