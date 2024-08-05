#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n; //median minimizes the absolute difference
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    int median=arr[n/2];
    long long cost=0; //cost needs to be ll here because of the upper bound of elements in arr
    for(int i=0;i<n;i++){
        cost+=abs(arr[i]-median);
    }
    cout<<cost;
}
