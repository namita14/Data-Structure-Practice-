#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    priority_queue<int> mxh;
       for (int i = 0; i <= n-1; i++) {
           mxh.push(arr[i]);
           if (mxh.size() > k) mxh.pop();
       }
       return mxh.top();
    }
}