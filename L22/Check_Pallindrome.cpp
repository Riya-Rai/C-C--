#include<bits/stdc++.h>
using namespace std;

char toLowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>=0 && ch<=9)){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPallindrome(char a[], int n){
    int s=0;
    int e = n-1;

    while(s<=e){
        if(toLowercase( a[s] )!= toLowercase( a[e] )){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}   

int getLength(char a[]){
    int count=0;

    for(int i=0; a[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char a[20];
    cout<<"Enter the string to check"<<endl;
    cin>>a;

    int len = getLength(a);


    cout<<" Pallindrome or Not: "<<checkPallindrome(a, len)<<endl;
}