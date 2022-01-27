#include <bits/stdc++.h>
using namespace std;


void Reverse(int arr[], int n){
    start = 0;
    end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Reverse(arr,6);
    printArray(arr,6);
}
