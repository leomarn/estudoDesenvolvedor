#include <iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;

    string toString() {
         cout << day << "/" << month << "/" << year;
    }
};


int main() {
    Date d1;
    
    d1.day = 3;
    d1.month = 11;
    d1.year = 2023;

    cout << d1.toString();
   


    
    
    return 0;
}