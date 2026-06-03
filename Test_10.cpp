#include<bits/stdc++.h>
using namespace std;

int main(){
    // int,char,long int, long long int, float, double

    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    // int a = 100000;
    // int b = 100000;
    // int c = a*b;
    // cout<<c<<endl;
    // int mx = INT_MAX;
    // int d = mx+1;
    // cout<<d;
    
    int a = 100000;
    int b = 100000;
    long long int c =  a * 1LL *b;
    cout<<c<<endl;


    double d = 100000;
    double e = 100000;
    double f = a * b;
    f = 1e24;
    cout<< fixed <<f <<endl;
    cout<< fixed<< setprecision(0)<< c << endl;
    // although we can store big number but we can not store acurately
    // precision error hai jisko hame avoid krna hai
    

    return 0;
}