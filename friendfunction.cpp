//friend function
// #include<iostream>
// using namespace std;
// class hello{
//     private:
//     int value;
    
    
//     friend int hi(hello s2);
// };
// int hi(hello s2)
// {
//     cout<<"Enter the value of s2.value: ";
//     cin>>s2.value;

//     return s2.value;
// }
// int main(){
//     hello s1;
//     cout<<hi(s1)<<endl;
// }
#include<stdio.h>
using namespace std;
class hello{
    private:
    int a=10;
    
    
    friend class hi;
};
class hi{
    public:
    void display(hello s2)
    {
        printf("The value of s2.a is: %d\n",s2.a);
    }
};
int main(){
    hello s1;
    hi s2;
    s2.display(s1);
}