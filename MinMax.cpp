#include <bits/stdc++.h>
using namespace std;

void getMax(int arr[],int n){
    int maxnum = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxnum = max(maxnum, arr[i]);
    }
    return maxnum;
}

void getMin(int arr[], int n){
    int minnum = INT_MAX;
    
    for(int i = 0; i<n; i++) {

        minnum = min(minnum, arr[i]);
    }
    return minnum;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout << " Maximum value is " << getMax(arr, size) << endl;
    cout << " Minimum value is " << getMin(arr, size) << endl;
}
