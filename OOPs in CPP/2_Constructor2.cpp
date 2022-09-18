/*************************************************************************
* Shallow Copy Vs Deep Copy
*
**************************************************************************/
#include<iostream>
using namespace std;

//Copy elision
class Sample{
    public:
    void display()
    {
        cout<<"hello Dear!";        
    }
};

class Example{
    int x;
    public:
    Example(const int n = 0){
        x = n;
    }
    Example( Example &t){
        x = t.x;
    }
    ~Example(){
        cout<<"Destructor invoked"<<endl;    
    }
    int getX(){
        return x;
    }
    int setX(int x){
        x = this->x;
    }
};

void shallowCopy(){                       
    Example e(5);
    Example e2 = e;

    cout<<e.getX()<<endl;
    cout<<e2.getX()<<endl;
    
    e.setX(10);

    cout << e.getX() << endl;
    cout << e2.getX() << endl;
}






void copyElision(){

    for(int i = 0; i <= 2; i++ ){   // This can print maybe 1,2 or 3
        Sample S;
        S.display();                // times depending on whether compiler
        cout<<endl;                 // performs RVO (Return Value Optimization)
    }
}

int main(){
    shallowCopy();
    //copyElision();
}