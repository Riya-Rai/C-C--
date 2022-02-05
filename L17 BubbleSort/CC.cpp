#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T, N;
	int A[N];
	
	for(int i=1; i<=T; i++){
	    
	    cin>>N;
	    
	    for(int j=0; j<N; j++){
	        cin>>A[j];
	    }
	    int M = 2*N;
	    
	    int B[M];
	    for(int j=0; j<N; j++){
	        
	        for(int k=j+1; k<N; k++){
	            B[k-1] = (A[i] & A[k]);
	        }
	    }
	    
	    int ans= B[0];
	    
	    for(int j=0; j<M; j++){
	        ans = (ans|B[j]);
	    }
	    
	    cout<<ans<<endl;
	    
	    
	}
	
	return 0;
}
