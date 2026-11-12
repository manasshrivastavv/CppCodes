// #include<iostream>
// using namespace std;
// class Wall{
// 	public:
// 		Wall(){
// 			cout<<"Constructor chal gaya...."<<endl;
// 		}
// };
// int main(){
// 	//Wall obj;
// 	return 0;
	
	
// }
#include<iostream>
using namespace std;
class Wall{
	public:
	Wall(){
		cout<<"constructer created"<<endl;
	}
	~Wall(){
		cout<<"Distructer destroy object"<<endl;
	}

};
int main(){
	Wall s1;
	cout<<"The proscess id completed "<<endl;
}