#include <iostream>
using namespace std;

string sayHelloTo(string name){
    return "Hello " + name + "!" ;
}

int main(){
    cout << sayHelloTo("Jana");

    return 0;
}