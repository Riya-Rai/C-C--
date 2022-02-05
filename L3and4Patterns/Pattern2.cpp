// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n "<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<" "<<j<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// for n=5
// 1  2  3  4  5 
// 1  2  3  4  5 
// 1  2  3  4  5 
// 1  2  3  4  5
// 1  2  3  4  5 

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
            cout<<" "<<n-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}


// 5  4  3  2  1  
// 5  4  3  2  1  
// 5  4  3  2  1 
// 5  4  3  2  1 
// 5  4  3  2  1
