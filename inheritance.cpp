// #include<iostream>
// using namespace std;
// class hello1{
//     public:
//     int a=10;
// };
// class hello2:public hello1{
//     public:
//     int b=20;
//     void hi()
//     {
//         cout<<a+b<<endl;
//     }
// };
// int main(){
//     hello2 s1;
//     cout<<s1.a<<endl;
//     cout<<s1.b<<endl;
//     s1.hi();
// }
// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     int a=10;
//     int b=20;
//     int c=30;
//     int d=40;
//     int e=(a+b+c+d)/4;
// };
// class hello1:public hello{
//     public:
//     void hi (){
//         cout<<e<<endl;
//         cout<<"the average plus 10 is: "<<e+10<<endl;
//     }

// };
// int main(){
//     hello1 s1;
//     s1.hi();
// }
// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     int a=10;
// };
// class hello1:public hello{
//     public:
//     int b=20;
// };
// class hello2:public hello1{
//     public:
//     int c=50;
//     void hi(){
//         cout<<a+b+c<<endl;
//     }
// };
// int main(){
//     hello2 s1;
//     s1.hi();
// }
//Multiple inheritance
// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     int a=10;
// };
// class hello1{
//     public:
//     int b=20;
// };
// class hello2:public hello,public hello1{
//     public:
//     int c=50;
//     void hi(){
//         cout<<a+b+c<<endl;
//     }
// };
// int main(){
//     hello2 s1;
//     s1.hi();
// }
//heierarchical inheritance
// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     int a=10;
// };
// class hello1:public hello{
//     public:
//     int b=20;
// };
// class hello2:public hello{
//     public:
//     int c=50;
   
//     };

// int main(){
//     hello2 s1;
//     hello1 s2;
//    cout<<s1.a<<endl;
//     cout<<s2.b<<endl;
// }
// //1.first to last sem  percentage overall 1-8
//virtual base class
#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
};
class B:public virtual A{
    public:
    int b=20;

};
class C:public virtual A{

}

