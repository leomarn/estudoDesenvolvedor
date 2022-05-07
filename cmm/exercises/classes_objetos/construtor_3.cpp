#include <iostream>
using namespace std;

class Actor{
    public:
    string name;
    string email;

    Actor(string name = "\"Padrao\"", string email = "\"??????\"" ): name(name), email(email) {}

    string toString(){
        return name + " : [" + email + "]";
    }

};

int main() {
    Actor actor1;
    Actor actor2("Steve", "st@name.com");

    cout << actor1.toString() << endl;
    cout << actor2.toString() << endl;

    return 0;
}