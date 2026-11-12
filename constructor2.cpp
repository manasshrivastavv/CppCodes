#include<iostream>
using namespace std;
class Wall{
	public:
		Wall(){
			cout<<"Constructor chal gaya...."<<endl;
		}
        ~Wall(){
            cout<<"Destructor chal gaya...."<<endl;
        }
};
int main(){
	Wall obj;
    cout<<"Constructor jinda he...."<<endl;
	return 0;
	
	
}