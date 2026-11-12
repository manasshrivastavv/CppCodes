#include<iostream>
using namespace std;
class Wall{
    double length;
    double height;
	public:
		Wall(double l,double h){
			length =l;
            height =h;
		}
        void CalArea(){
            cout<<"Area is :"<<length * height<<endl;
        }
};
int main(){
	double l,h;
    cout<<"Enter length :"<<endl;
    cin>>l;
    cout<<"Enter height :"<<endl;
    cin>>h;
    Wall w1(l,h);
    w1.CalArea();
	return 0;
	
	
}