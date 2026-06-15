// negative hash 

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N];


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        hsh[a[i] + 6]++;
    }
 
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x+6]<<endl;
    }
    return 0;
}

// O(N) + o(q) = O(n) = 2*10^5
// space c = O(n)

// fibonacci series
