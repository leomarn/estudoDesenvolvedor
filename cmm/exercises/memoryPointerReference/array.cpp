#include <iostream>
using namespace std;

int main(){

    int valores[] = {45, 24, 56, 76, 88, 87};

    int* p = &valores[0];

    cout << p << "\t" << *p << endl;

    p++;
    cout << p << "\t" << *p << endl;

    p++;
    cout << p << "\t" << *p << endl;

    p++;
    cout << p << "\t" << *p << endl;

    cout << sizeof p;



    return 0;
}