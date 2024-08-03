#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    cin>>inp;
    long int count=1;
    vector<long int> res;
    for(int i=0;i<inp.size();i++){
        if(inp[i]==inp[i+1]){ //counting repeating character until a different character appears breaks and pushing that value into the vector
            count++;
        }
        else{
            res.push_back(count);
            count=1;
        }
    }
    long int val=res[0];
    for(int i=0;i<res.size();i++){
        if(val<res[i]){
            val=res[i];
        }
    }
    cout<<val<<" ";
}
