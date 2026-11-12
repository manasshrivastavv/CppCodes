// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void eat(){
//         cout<<"Animal can eat "<<endl;
//     }

   
// };
// class Dog :public Animal{
//     public:
//     void bark(){
//      cout<<"Dog can bark"<<endl;   
//     }
// };
// int main(){
//     Dog d1;
//     d1.bark();
//     d1.eat();
//     return 0;
// }
#include<iostream>
using namespace std;
class  A{
    protected:
    int m1;
    void get_m1(){
        cout<<"Enter the marks of physics";
        cin>>m1;

    }
};
class B{
     protected:
     int m2;
    void get_m2(){
     cout<<"Enter the marks of chemistry";
        cin>>m2;
    }
};
class C{
     protected:
     int m3;
    void get_m3(){
        cout<<"Enter the marks of Maths";
        cin>>m3;
    }
};
class D :public A,public B,public C{
    int n,total;
    float per;
    char name[20];
    public:
    void final(){
        cout<<"Enter the numbers of students";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Enter the name of student:";
            cin>>name;
            get_m1();
            get_m2();
            get_m3();
            total=m1+m2+m3;
            per=(total/300.0)*100;
            cout<<"The name of student is :"<<name<<endl;
            cout<<"The total marks od student is :"<<total<<endl;
            cout<<"the percentage of student is :"<<per<<endl;
        }
    }

};



int main(){
    D d1;
    d1.final();
    return 0;
}