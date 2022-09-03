#include<iostream>
using namespace std;

class myClass{
    private:
    int x = 10;
    void displayx(){cout<<x,y,z;}
    protected:
    int y = 20;
    void displayy(){cout<<x,y,z;}
    public:
    int z = 30;
    void displayz(){cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
    }
};

class mySubClass : public myClass{
    public:
    void display(){
      //cout<<x;  // x is private hence inaccessible
        cout<<y<<"\n";    // y is protected hence accessible from child class
        cout<<z<<"\n"; // z is public hence accessible from child class
    }
};

int main(){
    myClass mc;
    mySubClass ms;
    //mc.displayx(); // private hence inaccessible from outside the class
    //mc.displayy(); // protected hence inaccessible from outside the class
    mc.displayz(); // public hence accessible from outside the class
    //cout<<mc.z<<" "<<mc.y<<" "<<mc.x<<endl;  // y and z are not accessible from outside of class
    //cout<<ms.z<<" "<<ms.y<<" "<<ms.x<<endl;  // again y is not accessible from outside of the class
    ms.display();  // public so accessible
    return 0;
}