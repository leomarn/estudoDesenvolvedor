#include <iostream>
using namespace std;

int max(int n1, int n2){
    return n1 >= n2 ? n1 : n2;
}

int main(){
    int a, b, c;

    for(int i = 0 ; i <= 2; i++){
        string outMsg;
        i == 0 ? outMsg = "first" : i == 1 ? outMsg = "second" : outMsg = "third";
        cout << "Enter the " << outMsg << "number: ";
        i == 0 ? cin >> a : i == 1 ? cin >> b : cin >> c;
    }

    cout << "Max: " << max(a, max(b, c));
    
    return 0;
}