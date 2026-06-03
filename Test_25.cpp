#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello";
    //str[0] = "a"; // error
    str[0] = 'a';
    cout<< str[0]<<endl;
    for(int i=0; i<str.size(); ++i){
        cout<< str[i] << endl;
    }
    cout<<str.size();
    return 0;
}