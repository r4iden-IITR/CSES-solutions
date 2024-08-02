#include <bits/stdc++.h>
using namespace std;
int main(){
    long n; //very simple question with the intent being to use a long datatype to prevent overflow
    cin>>n;
    vector<long int> result;
    result.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(3*n)+1;
        }
        res.push_back(n);
    }
    for(long i=0;i<res.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
}
