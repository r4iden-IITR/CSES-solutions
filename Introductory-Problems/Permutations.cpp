#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    if(n==1){
        cout<<1;
    }
    else if(n<=3&&n!=1){ //when n=2,3 there is no possible solution and theres a possible solution for every other value of n
        cout<<"NO SOLUTION";
    }
    else if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }
    else if(n==5){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<" "<<5;
    }
    else{
        for(int i=0;i<n-3;i+=2){
            swap(arr[i],arr[i+3]); //this method works well when n>5
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
}
