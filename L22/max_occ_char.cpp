#include<bits/stdc++.h>
using namespace std;

char getmaxOcccharacter(string s){

    int arr[26] = {0};

    //create an array of count of char
    for(int i=0; i<s.length(); i++){
        char ch = s[i];

    //lowercase
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number= ch - 'a';
        }
        else{ //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1;
    int ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans =i;
            maxi = arr[i];
        }
    }

    return 'a'+ ans;
}

int main(){
    string s;
    cout<<"Enter String"<<endl;
    cin>>s;

    cout<<getmaxOcccharacter(s)<<endl;

    return 0;
}