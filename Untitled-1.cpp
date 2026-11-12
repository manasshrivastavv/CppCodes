#include<iostream>
using namespace std;
class AG{
    private:
    string name;
    int roll_number;
    friend class ACP;
    friend class ACE;
    friend class ACERE;

};
class ACP{
    public:
    void admision(AG a){
        
        cout<<"name:"<<endl;
        cin>>a.name;
        cout<<"Roll number:"<<endl;
        cin>>a.roll_number;
    }
    void general(AG b){
        cout<<"MAIN BRANCH "<<endl;
        cout<<"for medical students "<<endl;
    }
};
int main(){
    AG a;
    ACP b;
    cout<<"enter your choice"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            b.admision(a);
            break;
        case 2:
            b.general(a);
            break;
        default:
            cout<<"invalid choice"<<endl;
    }
    
    
}