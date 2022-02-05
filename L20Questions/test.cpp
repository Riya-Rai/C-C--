#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t){
	    
	    int n,x;
        cout<<"Enter n then x"<<endl;
	    cin>>n>>x;

	    int fd[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>fd[i];
	    }
	    
	    sort(fd, fd + n);
	    
	    int count=0; 
	    int sum = 0;
	    
	    for(int i=n; i>0; i--){
	        
	        sum = fd[i];
	        
	        for(int j=i-1; j>0; j--){
	            sum = sum + fd[j];
	            count++;
	            
	            if(sum >= x){
	                cout<<(count+1)<<endl;
                     exit(0);
	            }
	        }
	        
	    }
	    
	    if(count==0){
	        int one=-1;
	        cout<<one<<endl;
	    }
	    
	    t--;
	    
	}
}
