#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int arr[n];
    long long int count=0; //basically increase any value less than its previous value to it the previous value and if its greater then do nothing
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            long long int diff=arr[i-1]-arr[i];
            count=count+diff;
            arr[i]=arr[i-1];
        }
    }
    cout<<count;
}
