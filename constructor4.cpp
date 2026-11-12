#include<iostream>
using namespace std;
class ABC{
    int *a;//data member
	public:
		ABC(){
			a = new int(10); // Allocate memory and initialize
            cout<<"constructor chal gya"<<endl;
		}
        ~ABC(){
            delete a; // Free the allocated memory
            a=nullptr; // Set pointer to nullptr after deletion
            cout<<"destructor chal gya"<<endl;
        }
};
int main(){
	ABC obj;
    cout<<"constructor jinda he...."<<endl;
	return 0;
	
	
}