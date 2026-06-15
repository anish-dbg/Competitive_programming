 /*
 Given a number N. Print its factorial.
 Constraints

 1 <= N <= 100

 print answer module M
 where M = 47

 A%M

 10^9+7 - very close to integer maximum
 multiplicative inverse
 */ 

 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    long long fact = 1;
    int M = 47;
    for(int i=2; i<=n; i++){
        fact = (fact*i)%M;
    }
    cout<<fact;
    return 0;
 }