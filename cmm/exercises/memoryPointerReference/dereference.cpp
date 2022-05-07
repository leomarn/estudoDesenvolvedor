#include <iostream>
using namespace std;

int main (){
    double pi = 3.14;
    double& piRef = pi;

    cout << piRef << endl;
    cout << &pi << endl;

    //* -> dereference operator
    // Think of a as "Get Value At..."
    cout << *&pi << endl;




    return 0;
}