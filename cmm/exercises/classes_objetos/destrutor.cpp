#include <iostream>
using namespace std;

class Person {

    public:
    string name;

    Person (string name) : name(name){
        cout << "Hello my name is " << name <<  endl;
    }

    ~Person(){

        cout << name << " saying goodbye!!" << endl;

    }

};


int main (){


    return 0;
}