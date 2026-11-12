#include<iostream>
using namespace std;
int area(int r){
    return 3.14*r*r;
}
float area(float s)
{
    return s*s;
}
double area(double b,double l)
{
    return 0.5*b*l;
}
int main(){

   cout<< area(2)<<endl;
    cout<<area(5.6f)<<endl;
    cout<<area(6.0f,7.0f)<<endl;
}