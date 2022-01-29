#include<bits/stdc++.h>
using namespace std;


int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        
        for(int j=0;j<m;j++){
            mp[b[j]]++;
        }
    return mp.size();
}


int main(){
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int j=0;j<m;i++){
        cin>>b[j];
    }

    cout<<doUnion(a,n,b,m)<<endl;
}