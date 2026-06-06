#include<bits/stdc++.h>
using namespace std;

char upper(char c){
    return 'A' + (c - 'a');
}

char lower(char c){
    return 'a' + (c - 'A');
}

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = upper(s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = lower(s[i]);
        }
    }

    int result = 0;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            result -= s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            result += s[i];
        }
    }
    result = abs(result);

    if(result < 2){
        cout << "0";
        return 0;
    }
    bool prime = true;

    for(int i = 2; i * i <= result; ++i){
        if(result % i == 0){
            prime = false;
            break;
        }
    }

    cout << (prime ? "1" : "0");

    return 0;
}