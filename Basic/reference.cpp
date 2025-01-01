#include<iostream>
using namespace std;

int main(){
    // string fname = "Raj";
    // string &student = fname;
    string fname = "Raj";
    string student = "Raj";

    // cout<< "Your Name is : "<< fname << "\n";
    // cout<< "Your Name is : "<< fname << endl;

    // cout<< "Your Name is : "<< fname << endl;
    // cout << student << endl;
    // cout << &student << endl;
    // cout << &fname << endl;
    // cout << endl;
    student = "Royal";
    cout<< "Your Name is : "<< fname << endl;
    cout << student << endl;
    cout << &student << endl;
    cout << &fname << endl;
    return 0;
}

/*
& : reference Operator  
* : dereferencing Operator   pointer declaration 

*/

