#include<iostream>
using namespace std;

/*
Pointer Declaration 

datatype* pointername;
datatype*pointername;
datatype *pointername;
datatype * pointername;

*/ 
int main(){

    string company = "Royal technosoft p Ltd";
    string* ptr = &company;

    cout<< "Company Name : " << company << endl;
    cout<< "Reference point : " << &company <<endl;
    cout<< "Ptr : " << ptr << endl;
    cout << "Dereferencing  :" << *ptr<< endl;

    return 0;
}