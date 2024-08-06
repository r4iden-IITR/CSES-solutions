#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k;
	cin >>n>>k;
	vector<pair<int, int>> times;
	for(int i=0;i<n;i++){
		int first=0;
		cin>>first;
		times.push_back({first,i});
	}
	sort(times.begin(),times.end()); //using two pointers I try to to reach towards the sum in sorted array and if the sum is possible I return their indices
	int l=0;
	int r=n-1;
	while(r>l){
		if(times[l].first+times[r].first>k){
			r--;
		}
		else if(times[l].first+times[r].first<k){
			l++;
		}
		else if(times[l].first+times[r].first==k){
			cout<<times[l].second+1<<" "<<times[r].second+1;
			break;
		}
	}
	if(r==l || times[l].first+times[r].first!=k){ //break condition is when both the pointers searched the whole array but didnt find the sum
		cout<<"IMPOSSIBLE";
	}
}
