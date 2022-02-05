#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your amount"<<endl;
    cin>>n;

    switch(1){

        case 1: {cout<<"Number of Rs.100 Notes = "<<(n/100)<<endl;
                     n=n%100;
                }

        case 2: {cout<<"Number of Rs.50 Notes = "<<(n/50)<<endl;
                  n=n%50;
                }

        case 3: {cout<<"Number of Rs.20 Notes = "<<(n/20)<<endl;
                  n=n%20;
                }

        case 4: {cout<<"Number of Rs.10 Notes = "<<(n/10)<<endl;
                   n=n%10;
                }

        case 5: {cout<<"Number of Rs.1 Notes = "<<(n/1)<<endl;
                   n=n%1;
                   break;
                }

        case 6: cout<<"Invalid Input"<<endl;
    }

}