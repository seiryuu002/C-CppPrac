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
    int getVolume(){ return side*side*side;} // getVolume is a Simple function
};



int main(){
    Cube c;
    cout<<c.getVolume()<<endl;  // calling simple function
    return 0;
}