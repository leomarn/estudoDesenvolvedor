#include <iostream>
using namespace std;


// https://pt.cppreference.com/w/cpp/language/types
// https://www.geeksforggeks.org/c-data-types/
int main(){

    bool isAdmin = true; //bolean type - true or false (0 or 1)

    cout << isAdmin << endl;

    char symbol = '#';
    cout << symbol << endl;

    // datatype modifiers
    unsigned short int age = 31;

    float pi = 3.14; // 32 bits - single precision floating point type
    const double PI = 3.141592; // 64 bits - double precision floating point type
    cout << pi << endl;
    cout << PI << endl;

    cout << sizeof(char) << " byte(s)" << endl;
    cout << sizeof(char16_t) << " byte(s)" << endl;
    cout << sizeof(char32_t) << " byte(s)" << endl;
    cout << sizeof(wchar_t) << " byte(s)" << endl;
    cout << sizeof(int) << " byte(s)" << endl;
    cout << sizeof(long int) << " byte(s)" << endl;
    cout << sizeof(long long int) << " byte(s)" << endl;
    cout << sizeof(float) << " byte(s)" << endl;
    cout << sizeof(double) << " byte(s)" << endl;




    return 0;
}