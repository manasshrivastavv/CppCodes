#include<iostream>
using namespace std;
// class hello{
//     public:
//     int num;
//     void get(int a){
//         num=a;

//     }
//     int put(){
//         return ++num;
//     }

// };
// int main(){
//     hello s1;
//     s1.get(100);
//     cout<<s1.put()<<endl;
// }
// class A{
//     public:
    
//     const int a=10;
    
// };
// class B:public A{
//     public:
//     int b=80;
    
// };
// class C:public B{
//     public:
//     int c=90;
//     void hi() const{
//         cout<<a+b+c<<endl;
//     }

// };
// int main(){
//     C s1;
//     s1.hi();
// }
class A{
    public:
    
    
    A() const{
        cout<<"hello world"<<endl;
    }
};
int main(){
    A s1;

}