#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cout<<"Enter your input"<<endl;
    cin>>c;
    n=c;
if (n>=65&& n<=96){
    cout<<" The input given is of type: UpperCase"<<endl;
}
else if(n>=97 && n<=122){
    cout<<"The input given is of type : Lowercase"<<endl;
}
else if (n>=48 && n<= 57){
    cout<<"The input given is of type : Number"<<endl;
}
else {
    cout<<"The input given is of type : Others"<<endl;
}
  
}