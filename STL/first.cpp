// STL Introduction(standard template library)

/*  It provides implementaation of basic data structures so that
    we don't need to implement whole data structure from scratch
    STL in Cpp can be divided into following two parts

            1.Containers                      2.Algorithms

    Containers can be further divide into three types of containers
    1.     Simple ->       pair, vector, forward_list, list
    2.Container adapters-> stack, queue, priority_queue
    3.   Associative ->    set, map, unordered_set, unordered_map

    Algorithms -> are implementation of basic algorithms.
    ex. -> binary_search, find, reverse, sort, etc.

*/

/* Arrays in STL 

#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 10> arr = {1, 2, 3, 4};
    int size = arr.size();              // to return size of the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Element at index 2 is "<<arr.at(2)<<endl;
    cout<<"Check if array is empty or not :"<<arr.empty()<<endl;
    cout<<"front: "<<arr.front()<<endl;
    cout<<"Back: " << arr.back()<<endl;
    return 0;
}
*/

/*
Vector in STL*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
}