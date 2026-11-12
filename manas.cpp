#include<iostream>
using namespace std;
class hello{
    private:
    int n1;
    int n2;
    public:
    void hi();
    void bye();

};
void hello::hi(){
    cout<<n1<<endl;
    cout<<n2<<endl;
}
void hello::bye(){
    cout<<"Enter two numbers:"<<endl;
    cin>>n1;
    cin>>n2;
}
int main(){
    hello h;
    h.bye();
    h.hi();
    return 0;
}