#include<bits/stdc++.h>
using namespace std;

bool checkP(string str, int i, int j){
    //base case
    if(i>j)
        return true;

    if(str[i]!=str[j])
        return false;
    else{
        //Recursive call
        return checkP(str, i+1, j-1);
    } 
}

int main(){

    string name = "AJJA";
    cout<<endl;

    bool ans = checkP(name, 0, name.length()-1);

    if(ans){
        cout<<"It is a pallindrome "<<endl;
    }
    else{
        cout<<"It is not a pallindromed "<<endl;
    }

}