#include <iostream>
using namespace std;
#define FIO ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

int main() {
    FIO;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ar[n];
	    for (int i=0; i<n; i++) cin>>ar[i];
	    
	    int pd=ar[1]-ar[0];
	    int curr=2;
	    int ans=2;
	    int j=2;
	    while(j<n){
	        
	        if( pd == (ar[j]-ar[j-1]) ){
	            curr+=1;
	            
	        }
	        else{
	            curr=2;
	        }
	        pd=ar[j]-ar[j-1];
	        ans=max(ans,curr);
	        j++;
            

	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
