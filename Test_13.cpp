#include<bits/stdc++.h>
using namespace std;


int x = 2;  // global variable
// check even number
int main(){
    int n;
    cin>> n;
    if(n%2 == 0){
        // int x = 2 scope variable
        cout<<"Even Number";
    }
    else if(n%3 == 0){
        cout<<"Divisible by 3";
    }
    else{
        cout<<"Odd Number";
    }
    // if (n%2 == 0) cout<<"Even Number";
    // else cout<<"Odd Number";
    return 0;
}