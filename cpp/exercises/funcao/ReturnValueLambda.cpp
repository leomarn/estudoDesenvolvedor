#include <iostream>
using namespace std;

// typedef variable. 
using binary = int (*)(int, int);

// lambda function  instance. 
auto maxValue = [](int n1, int n2) -> int { return n1 >= n2 ? n1:n2;};

// parameter function  instance. 
int exec(binary func, int n1, int n2){
    return(*func)(n1, n2);
}

int main(){
    int input, maxInput=0, sumInput=0,quotient=0;

    do{
        cout << "Enter a number: ";
        cin >> input;
        if (input >= 0){
            sumInput+=input;
            quotient++;
        }
        maxInput = exec(maxValue, input, maxInput);

    }while(input >= 0);

    double average = (double) sumInput/quotient;
    cout << "Sum: " << sumInput << ", Amount of value entered: " << quotient
    << ", Avarage: " << average << ", Auto value: " << maxInput;

    return 0;
}