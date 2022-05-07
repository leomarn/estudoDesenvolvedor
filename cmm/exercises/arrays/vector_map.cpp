#include <iostream>
#include <vector>
using namespace std;
using stateFunction = int (*)(int);

vector<int> map(vector<int> Vector, stateFunction Function){
    vector<int> newVector;
    for(auto element: Vector){
        newVector.push_back((*Function)(element));
    }
    return newVector;

}

int main() {

    auto square = [](int number){return number * number;};

    vector<int> numbers = {5, 12, 44, 52, 112};
    vector<int> squares = map(numbers, square);

    for(auto s: squares){
        cout << s << "\t";
    }

    
    return 0;
}