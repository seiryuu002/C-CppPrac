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
    Sample S;
    for(int i = 0; i <= 2; i++ ){
        S.display();
        cout<<endl;
    }
}

int main(){
copyElision();
}