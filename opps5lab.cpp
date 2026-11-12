// #include<iostream>
// using namespace std;
// class Student{
//     const int rollNumber;
//     public:
//     Student(int roll) : rollNumber(roll){

      
//     }
//     void display(){
//         cout<<"the roll number is: " <<rollNumber<<endl;
//     }
// };
// int main(){
//     Student s1(101);
//     s1.display();
//     return 0;
// }
// #include<iostream>
// using namespace std;

// class student {
//     static int rollnumber;

// public:
//     static int count;
//     student(){
//         count++;
//     }
// };
// int student::count =0;

// int main() {
//     student s1;
//     student s2;
//     student s3;
//     student s4;
//     cout<<"the total students are:"<<student::count<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Demo{
//     static int X;
//     public:
//     static void display(){
//         cout<<"the value of X is :"<<X<<endl;
//     }

// };
// int Demo::X = 10;
// int main(){
//     Demo::display();

// }
#include<iostream>
using namespace std;
class Demo{
    int X;
    public:
    Demo(){
        X=10;
    }
    void display() const{
        cout<<"the value of X is :"<<X<<endl;

    }
};
int main(){
   const Demo d1;
   d1.display();
}