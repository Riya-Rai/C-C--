#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]); 
        s++;
        e--;
    }

    return v;
}

void print(vector<int> v){

    cout<<"Printing reverse array"<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
}

int main(){

    vector<int> v;

    v.push_back(11);
    v.push_back(1);
    v.push_back(5);
    v.push_back(13);
    v.push_back(8);

    vector<int> ans = reverse(v);

    print(ans);
}