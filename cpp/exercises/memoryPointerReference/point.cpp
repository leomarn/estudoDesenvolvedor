#include <iostream>
using namespace std;

int main(){
    int value = 98343;
    int &ref = value;
    int *pot = &value;

    cout << value << "\t" << ref << "\t" << pot << "\t" << endl;
    cout << &value << "\t" << &ref << "\t" << pot << "\t" << endl;
    return 0;
}