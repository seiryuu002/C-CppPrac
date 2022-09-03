#include<iostream>
using namespace std;

class Employee{
    public:
    int eId;
    string name;
    Employee(int i, string n){
        this->eId = i;
        this->name = n;
    }
    void display(){
        cout<<"eid: "<<eId<<"name: "<<name<<endl;
    }
};

int main(){
    Employee e = Employee(1, "a");
    e.display();
    return 0;
}