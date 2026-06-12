#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ctn =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            ctn++;
        }
    }
    cout<<ctn;
}