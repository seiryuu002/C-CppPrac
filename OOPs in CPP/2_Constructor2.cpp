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

void copyElision(){

    for(int i = 0; i <= 2; i++ ){   // This can print maybe 1,2 or 3
        Sample S;
        S.display();                // times depending on whether compiler
        cout<<endl;                 // performs RVO (Return Value Optimization)
    }
}

int main(){
copyElision();
}