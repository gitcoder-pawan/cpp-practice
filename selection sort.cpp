#include <iostream>
using namespace std;
void selection(int ar[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n;j++){
            if (ar[i]>ar[j]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                
            }
        }
    }
    
    for (int i=0; i<n;i++) cout<<ar[i]<<"\n";
    return;
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	int ar[n];
	for (int i=0; i<n;i++) cin>>ar[i];
	selection(ar, n);
	return 0;
}
