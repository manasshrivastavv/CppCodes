//this pointer
#include<iostream>
using namespace std;
class hello{
    public:
    int a;
    hello(int a){
        this->a=a;
        
    }
    void hi(){
        cout<<a<<endl;
    }
};
int main(){
    hello h(10);
    h.hi();
}