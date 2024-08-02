#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int temp;
    long long int sum=0;
    for(int i=1;i<n;i++){
        cin>>temp;
        sum+=temp;
    }
    long long int act_sum=(n*(n+1))/2; //basically gives us the sum of n natural numbers- the sum of the input numbers therefore we get the missing value
    cout<<act_sum-sum; //this is a less complex method than searching through the array as its a fixed operation with time complexity O(1)
}
