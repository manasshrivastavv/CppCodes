// #include<iostream>  this constructur is used with parameters
 // using namespace std;
 // class hello{
//     public:
//     hello(int a,int b){
//         cout<<a+b<<endl;
//     }
       
// // };
// // int main(){
// //     hello obj(10,20);
// //     hello s2(100,200);
// //     hello s3();
// //     return 0;
// // }
// //COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;

// class hello{
//     public:
//     int value;
//     hello(int a){
//         value = a;
//     }
//     hello(hello& obj){ //copy constructor
//         value = obj.value;
//     }

// };
// int main(){
//     hello s1(10);
//     hello s2(s1); // This will call the copy constructor
//     cout<<"value of s1:"<<s1.value<<endl;
    
//     return 0;
// }
#include<iostream>
using namespace std;
class hello{
    private:
    int a,b;
    public:
    hello(int aa,int bb){
        
        a=aa;
        b=bb;
        cout<<"constructor"<<a<<endl;
        cout<<"constructor"<<b<<endl;
        cout<<"Address of a:"<<&a<<endl;
        cout<<"Address of b:"<<&b<<endl;
    }
    ~hello(){
        cout<<"destructor"<<a<<endl;
        cout<<"destructor"<<b<<endl;
        cout<<"Address of a:"<<&a<<endl;
        cout<<"Address of b:"<<&b<<endl;
    }
};
int main(){
    hello obj(10,20);
    return 0;
}