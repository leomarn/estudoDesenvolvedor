#include <iostream>
using namespace std;

int soma (int a, int b){

    return a + b;

}

int main(){

    int i, sum = 0, tt=0, x, y;

    while (i != -1){
        cout << "Enter a number: ";
        cin >> i;
        if (i != -1){
            sum += i; 
            tt++;
        }
            
    }
    cout << "sum: " << sum << endl;

    double med = (double) sum/tt;
    cout << "media: " << med << endl;

    for (int i = 0; i < 10; i++){
        cout << i << endl;
    }

    cout << soma(x,y) << endl;

    return 0;
}

