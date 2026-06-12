#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ctn =0;
    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){
            ctn++;
        }
    }
    cout<<ctn;
}

// o(n*n) = o(n^2)