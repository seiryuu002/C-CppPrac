/* this is the first program to learn oop*/ 
/* four features of Oops
*  1. Inheritance
*  2. Polymorphism
   3. Abstraction
   4. Encapsulation
   there are other terms too such as 
   Coupling, Cohesion, Association, Aggregation and Compostion.
*/


/*        INTRODUCTION        */
#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    int vehicleId;
    float mileage;
    string VehicleType;
};

class Student{
    public:
    int roll_no;
    string name;

    void entry(int roll, string name){
        roll_no = roll;
        name = name;
    }

    void display()
    {
        cout << "Id: " <<roll_no;
        cout<<"Name: "<<name;
    }
};

int main(){
    Car c;
    Student S1, S2;
    c.vehicleId = 101;
    c.mileage = 12.5;
    c.VehicleType = "SUV";
    cout<<"Vehicle Type: "<<c.VehicleType<<"\t"<<"Vehicle Id: "<<c.vehicleId<<" "<<"mileage: "<<c.mileage<<endl;
    S1.entry(1, "a");
    S2.entry(2, "b");
    S1.display();
    S2.display();
    return 0;
}