#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> arr;
	int count=0;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr.push_back({temp,i+1}); 
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){ //count the no. every time its index is reached but remove it if its in the same loop as previous
		count++;
		if(arr[i].second<arr[i+1].second){
			count--;
		}
	}
	cout<<count;
}
