#include <iostream>

using namespace std;

auto maxNumber = [](int n1, int n2) -> int { return n1 >= n2 ? n1 : n2;};

int main(){

    int numb[2];

    for(int i = 0 ; i <= 2; i++){

        cout << "Enter the number: ";

        cin >> numb[i];

    }

    cout << "Max: " << maxNumber(numb[0],maxNumber(numb[1],numb[2])) << endl;



    return 0;

}