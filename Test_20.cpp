#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i =1; i<=10; ++i){
        if(i == 8){
           // break; // last for loop ke bahar aa jayega
           continue; // skip the iteration
        }
        cout<<i<<endl;
    }
}