#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end()); 
    long res=1;
 
    /*If arr[i] is greater than ‘res’, then we found the gap which is 
    ‘res’ because the elements after arr[i] are also going to be
    greater than ‘res’.*/
 
    //basically we try to find the sum+1 where sum+1 cannot exist since the nect element is too big
 
    for(int i=0;i<n && res>=arr[i];i++){
        res+=arr[i];
    }
    cout<<res;
}
