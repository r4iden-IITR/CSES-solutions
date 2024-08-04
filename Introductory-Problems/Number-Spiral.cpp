#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ntest;
    cin>>ntest;
    for(int test=0;test<ntest;test++){
        unsigned long long x,y;
        cin>>y;
        cin>>x;
        unsigned long long val;
        if(x>y){
            val=x*x-x+1;
            if(x%2==0){
                val-=(x-y);
            }
            else{
                val+=(x-y);
            }
        }
        else{
            val=y*y-y+1;
            if(y%2!=0){
                val-=(y-x);
            }
            else{
                val+=(y-x);
            }
        }
        cout<<val<<endl;
    }
}
