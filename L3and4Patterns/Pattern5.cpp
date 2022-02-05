// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int count=1;

//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<" "<<count<<" ";
//             j=j+1;
//             count=count+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }

// }

// 1
// 23
// 345
// 4567

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=0;

    while(i<n){
        int j=0;
        while(j<=i){
            cout<<" "<<i+j+1<<" ";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }

}