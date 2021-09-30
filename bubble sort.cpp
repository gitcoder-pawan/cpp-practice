#include <iostream>
using namespace std;
void bubble(int ar[], int n){
    for ( int i=0; i<n-1; i++){
        for ( int j=0; j<n-i-1;j++){
            if (ar[j]>ar[j+1]){
                int t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }
    for ( int i=0; i<n; i++) cout<<ar[i]<<"\n";
    return;
}
int main() {
    
    int n;
    cin>>n;
    int ar[n];
    for (int i=0; i<n; i++) cin >>ar[i];
    bubble(ar, n);

	return 0;
}
