#include<bits/stdc++.h>
using namespace std;

void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }

    cout<<name<<endl;
    
}

int getlength(char name[]){
    int count=0;

    int i=0;

    while(name[i]!='\0'){
        count++;
        i++;
    }

    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;

    cout<<"Your name is "<<name<<endl;

    int n = getlength(name);
    cout<<"Reverse of your name is "<<endl;
    reverse(name, n);
}