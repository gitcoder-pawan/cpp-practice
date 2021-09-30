#include <iostream>
using namespace std;
void insertion(int ar[],int n){
    for (int i=1;i<n;i++){
        int curr=ar[i];
        int j=i-1;
        while(curr<=ar[j] && j>=0){
            ar[j+1]=ar[j];
            j--;
            
        }
        ar[j+1]=curr;
    }
    for ( int i=0; i<n; i++) cout <<ar[i]<<"\n";
    return;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int ar[n];
	for ( int i=0; i< n; i++) cin>>ar[i];
	insertion(ar,n);
	
	return 0;
}
