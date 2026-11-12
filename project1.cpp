//Array of object
// #include<iostream>
// using namespace std;
// class hello{
//     private:
//     int a;
//     public:
//     void hi();
//     void hi2();
// };
// void hello::hi(){
//     cout<<"enter the value"<<endl;
//     cin>>a;
// }
// void hello::hi2(){
//     cout<<"element a :"<<a<<endl;
// }
// int main(){
//     hello s1[50];
//     int n;
//     int i;
//     cout<<"Enter the number of of value"<<endl;
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         s1[i].hi();
//     }
//     for(i=0;i<n;i++){
//         s1[i].hi2();
//     }

    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr;
//     ptr=new int[10];
//    *ptr=4;
//    cout<<"value"<<*ptr<<endl;
//    cout<<"address"<<ptr<<endl;
//    delete []ptr;

// }
// #include<iostream>
// using namespace std;
// void hi(int a,int b){
//     cout<<a<<b<<endl;

// }
// void hi(double n,double m){
//     cout<<n<<m<<endl;
// }
// int main(){
//     hi(1.2,2.2);
    
// }
// #include<iostream>
// using namespace std;
// class hello{
//     public:
//     int x;
//     int y;
    
//     hello(int n,int m){
//         x=n;
//         y=m;


//     }
//     hello(hello &s1){
//         x=s1.x;
//         y=s1.y;
//         cout<<s1.x<<endl;
//         cout<<s1.y<<endl;

//     }

// };
// int main(){
//     hello s1(5,6);
//     hello s2(s1);
// }
#include<iostream>
using namespace std;
class A{
    public:
    int a=10;
    void hi(){
        cout<<"Manas"<<endl;
    }
};
class B:virtual public A{
    public:
    int b=10;
    void hi2(){
        cout<<"Lovish"<<endl;
    }


};
class C:virtual public A{
    public:
    int c=20;
    void hi3(){
        cout<<"MOnkey"<<endl;
    }
};
class D:public B,public C{
    public:
    int d=30;
    
    void hi4(){
        
        cout<<a<<b<<c<<d;
    }
};
int main(){
    D s1;
    s1.hi4();

}

