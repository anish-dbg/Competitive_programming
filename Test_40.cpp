// pointer = it store the memory address

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 4;
    int *p_x = &x;
    cout<< "Addr X: "<< &x << endl;
    cout<< "Value p_X: "<< p_x << endl;
    cout<< "Value *p_x: "<< *p_x << endl;

    *p_x = 5;
    cout<< "x: "<< x << endl;
    cout<< "p_x + 1: "<< p_x + 1 << endl;

    // double pointer
    int **p_p_x = &p_x; // double pointer ek pointer ka address store kr raha hai
    cout<< "Addr p_p_x: "<< &p_x << endl;
    cout<< "Val p_p_x: "<< p_p_x << endl;
    cout<< "Val *p_p_x: "<< *p_p_x << endl;
    cout<< "Val **p_p_x: "<< **p_p_x << endl;
    **p_p_x = 7;
    cout<< "x: "<< x<< endl;

}