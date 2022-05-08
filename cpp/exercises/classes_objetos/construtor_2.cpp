#include <iostream>
using namespace std;

class User{
    public:
    string name;
    string email;

    User (){ }
    User (string _name, string _email){
        name = _name;
        email = _email;
    }
    string toString(){
        return name + " : [" + email + "]";
    }

};

int main() {
    User user1;
    user1.name = "John Hudson";
    user1.email = "johnHs@gmau.com";

    cout << user1.toString() << endl; 

    User user2("Maria Hairel", "HairelM@py.com"); 
    cout << user2.toString() << endl;  
    
    User user3 = User("Maria Hairel", "HairelM@py.com"); 
    cout << user3.toString() << endl;  

    return 0;
}