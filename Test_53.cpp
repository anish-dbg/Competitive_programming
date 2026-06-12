// print sum of array in each test case.
//  contstraints:
//  1 <= T <= 10000
//  1 <= N <= 10000
//  1 <= a[i] <= 10000
//  sum of N over all test cases is < 10^7


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>>n;
        int sum =0;
        int ctn =0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum = sum + x;
            ctn++;
        }
        cout<<sum;
    }
}

// o(t*n) = o(n^2)
// o(10^7)