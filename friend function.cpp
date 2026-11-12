//friend function
#include<iostream>
using namespace std;
class hello{
    private:
    int value=10;
    
    friend int hi(hello s2);
};
int hi(hello s2)
{
    
   
    return s2.value;
}
int main(){
    hello s1;
    cout<<hi(s1)<<endl;
    
     
    
}