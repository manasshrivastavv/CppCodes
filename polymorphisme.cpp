// #include<iostream>
// using namespace std;
// int main(){
//     int *arr=new int[10]{};
//     arr[3]=100;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
//     delete[]arr;
//     int *arr=new int[10]{};
//     arr[3]=200;
//     for()
    


// }
#include<iostream>
using namespace std;
class hello{
    int num;
    public:
    hello(int a){
        num =a;
    }
    void hi(){
        cout<<num<<endl;
    }
};
int main(){
 hello *s1=new hello(100);
 hello s2;
 ++s1=&s2;
 s2->hi();

}