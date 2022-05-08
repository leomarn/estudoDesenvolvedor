#include <iostream>
using namespace std;

using binary = int (*) (int, int);

auto add = [](int n1, int n2) -> int { return n1 + n2; };
auto subtract = [](int n1, int n2) {return n1 - n2;};

int exec(binary func, int n1, int n2){
    return(*func)(n1, n2);
}


int main(){

    cout << exec(add, 10,5);


    return 0;
}
