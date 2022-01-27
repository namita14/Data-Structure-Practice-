#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
    {
        vector <int> c;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            c.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==1)
            c.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==2)
            c.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            a[i]=c[i];
        }
    }

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort012(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}