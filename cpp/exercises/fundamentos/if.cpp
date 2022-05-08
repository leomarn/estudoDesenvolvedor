#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Digite tres numeros: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if ((a >= b) && (a >= c)){
        printf("O numero maior eh o 'a': %d", a);
    }
    else if ((b >= a) && (b >= c)){
        printf("O numero maior eh o 'b': %d", b);
    }
    else{
        printf("O numero maior eh o 'c': %d", c);
    }

    return 0;
}