#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i, int j){

    //to check working 
    cout<<"call received for "<<str<<endl;

    //base case
    if(i>j)
        return;
    
    swap(str[i], str[j]);
    i++;
    j--;

    //recursive relation
    reverse(str, i, j);
}

int main(){
    string name = "riya";

    reverse(name, 0, name.length()-1);

    cout<<name<<endl;

    return 0;
}