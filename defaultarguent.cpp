#include<iostream>
using namespace std;
string hi(string name="hello world"){
    cout<<name<<endl;
}
int main(){
    hi("hello");
    hi();

}//compiler error: void function 'hi' should not return a value