#include<iostream>
using namespace std;


// enum Result{
//     FAIL,PASS,TOP
// };
// base : 0,1,2

// enum Result{
//     FAIL = 34,
//     PASS = 50,
//     TOP = 10
// };
enum Days{
    MONDAY,
    TUESDAY,
    WEDNESDAY
};
int main(){
    // enum Result rs1 = FAIL;
    // enum Result rs2 = PASS;
    // enum Result rs3 = TOP;

    // cout<< rs1<<endl;
    // cout<< rs2<<endl;
    // cout<< rs3<<endl;
    enum Days choice = MONDAY;

    switch (choice)
    {
    case 0:
        cout<<"Monday";
        break;
    }


    return 0;
}


// enum : keyword : 