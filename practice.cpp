// #include<iostream>

// using namespace std;
// struct hello{
//     float a,b;
//     void input(){
//         cout<<"enter the value of first operator"<<endl;
//         cin>>a;
//         cout<<"enter the value of second operator"<<endl;
//         cin>>b;
//     }
//     void addition(){
//         cout<<a+b<<endl;
//     }
//     void substraction(){
//         cout<<a-b<<endl;
//     }

// };
// int main(){
//     int choice;
//     hello s1;
//     s1.input();
//     cout<<"enter your choice"<<endl;
//     cin>>choice;
//     switch(choice){
//         case 1: cout<<"substration"<<endl;
//               s1.substraction();
//               break;
//         case 2:cout<<"addition"<<endl;
//                s1.addition();
//                break;
//         default:
//         cout<<"invalid choice"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int abc(int num){
//     if (num<0){
//         return -num;
//     }
//     return num;
// }
// float abc(float num){
//     if(num<0)
// {
//     return -num;
// }
// return num;
// }
// double abc(double num){
//     if (num<0){
//     return -num;
//     }
// }
// int main(){
//     cout<< "value of -5 id"<<abc(-5)<<endl;
//     cout<<"value of -55455 is"<<abc(-55455)<<endl;
//     cout<<"value of -55455.5 is"<<abc(-55455.5)<<endl;
// }
// memory allocation
// 
// #include<iostream>
// using namespace std;
// class hello{
//     private:
//     int name;
//     public:
//     void input();
//     void output();
// };
// void hello::input(){
//     cout<<"enter the name"<<endl;
//     cin>>name;

// }
// void hello::output(){
    

//     cout<<name<<endl;
// }
// int main(){
//     hello *s1=new hello[50];
//     int n,i;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     for(i=0;i<=n;i++){
//     s1[i].input();
//     }
//     for(i=0;i<=n;i++){
//         s1[i].output();
//     }
//     return 0;
//     delete []s1;
// }
// 
#include<iostream>
using namespace std;
class A{
    public:
    int a=5;
};
class B:public virtual A{
    public:
    int b=10;

};
class C:public virtual A{
    public:
    int c=8;
};
class D:public virtual B,public virtual C{
    public:
    void hi(){
    cout<<a+b+c<<endl;
    }
};
int main(){
    D d1;
    d1.hi();
}