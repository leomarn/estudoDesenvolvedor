 #include <iostream>
 using namespace std;
 const double MINIMUM_WAGE = 1500;

 class Employee{
    private:
        double wage = MINIMUM_WAGE;
    public:
        string name;

        double getWage(){
            return wage;
        }
        void setWage(double w){
            if(wage >= MINIMUM_WAGE){
                wage = w;
                }
        }
 };
 
 int main() {
     Employee emp1;

     emp1.name = "Paulo Jose";
     emp1.setWage(4000.12);

     cout << emp1.getWage() << endl;
     
     return 0;
 }