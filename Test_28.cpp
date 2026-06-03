// print string reverse

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>> str;
    string str_rev;
    int n = str.size();
    // while(n--){
    //     cout<<(str[n]);
    // }

    for(int i =n-1; i >=0; --i){
        str_rev.push_back(str[i]);
    }
    cout<<str_rev;
  return 0;
}