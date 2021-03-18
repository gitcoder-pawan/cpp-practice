#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(50);
	v.pop_back();
	sort(v.begin(),v.end());
	int k=(int) v.size();
	for(int i=0; i<k; i++){
		cout<<v[i]<<" ";
	}
}

