#include <iostream>
using namespace std;

int main(){
    int x = 2;
    string name = "Leomar";
    int& xRef = x;


    string& ref = name;
    

    cout << x << " " << &x << endl;
    cout << xRef << " " << &xRef << endl;

    cout << name << " " << ref << endl;

    name.append("!!!!!");

    cout << name << ref;

    return 0;
}