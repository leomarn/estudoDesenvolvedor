#include <iostream>
using namespace std;

int main(){

    double area, raio, PI = 3.1415;

    cout << "Enter raio: ";
    cin >> raio;

    area = PI * (raio*raio);
    cout << area;


    return 0;
}