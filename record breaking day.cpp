#include<bits/stdc++.h>
using namespace std;
#define zz ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void solve(){
    int n;
    cin>>n;
    int ar[n+1];
    for (int i=0; i<n; i++) cin>>ar[i];
    int count =0;
    int mx=-1;
    ar[n]=-1;
    // cout<<ar[n];
    for (int i=0;i<n; i++){
        if (ar[i]>mx && ar[i]>ar[i+1]){
            count++;
            cout<<ar[i]<<" ";
            mx=max(mx,ar[i]);
        }
    }
    cout<<"\n"<<count<<"\n";
    return;
}
int main(){
    zz;
    int t=1;   
    // cin>>t;
    while(t--) solve();
}