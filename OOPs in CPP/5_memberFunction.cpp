/*************************************************************************
 *  There are many types of class member functions such as
 *  1.Simple
 *  2.Static 
 *  3.Const
 *  4.Inline
 *  5.Friend
 * 
 *************************************************************************/

#include<iostream>
using namespace std;

// Simple function
class Cube{
    int side = 5;
    public:
    int getVolume(){ return side*side*side;} // getVolume is a Simple function.
    static int getVol(){                     // static function can only use static variables or 
        int a = 6;                           // Variables declared within function.
        return a*a*a; }
    int getV() const{                        //const function.
        int a = 7;
        return a+a;
    }
};


int main(){
    Cube c;
    cout<<c.getVolume()<<endl;  // calling simple function.
    cout<<Cube::getVol()<<endl; //calling static function.
    cout<<c.getV()<<endl;       //calling const function
    return 0;
}