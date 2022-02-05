#include<bits/stdc++.h>
using namespace std;

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
    cout<<"Lenght of the character array is: "<<getlength(name)<<endl;
}