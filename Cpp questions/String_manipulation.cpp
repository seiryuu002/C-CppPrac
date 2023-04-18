#include<iostream>
#include<string.h>
using namespace std;

string func(string s){
    string first = "hel", second = "bel";
    int flag = 0;
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '*'){
            flag = 1;
        }
        if(flag){
            second[i] = s[i];
        }
        else{
            first[i] = s[i];
        }
    }
    cout<<first<<endl;
    cout<<second<<endl;
    return "false";
}

int main(){
    cout<<func("aaa*bbb");
    return 0;
}