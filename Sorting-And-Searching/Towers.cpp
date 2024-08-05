#include <bits/stdc++.h>
using namespace std;
 
//simply remove the smallest element greater than current number and insert the number
//if no such element exists then just insert the new element
 
int main() {
    int n = 0;
    cin >> n;
    vector<int> arr;
    
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        
        auto it = upper_bound(arr.begin(), arr.end(), temp);
        if (it != arr.end()) {
            *it = temp;
        } else {
            arr.push_back(temp);
        }
    }
    cout << arr.size() << endl;
}
