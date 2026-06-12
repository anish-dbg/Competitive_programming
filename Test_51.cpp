#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ctn = 0;
    while(n>0){
        n=n/2;
        ctn++;
    }
    cout<<ctn;
}

// 2^a = n

// o(log(n))