#include <iostream>
using namespace std;

int main(){
    string name = "Leomar";
    string& ref = name;

    cout << name << " " << ref << endl;

    name.append("!!!!!");

    cout << name << " " << ref << endl;

    return 0;
}