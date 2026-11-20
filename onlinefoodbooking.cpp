#include<iostream>
#include<iomanip>

using namespace std;
class FoodItem
{
    int Id;
    string Name;
    float Price;

    public:
    FoodItem()
    {
        Id=0;
        Name="";
        Price=0;
    }

    FoodItem(int id,string name,float price)
    {
        this->Id=id;
        this->Name=name;
        this->Price=price;
    }

    
    void display()const
    {
        cout<< Id << "\t"<<Name<<"\tRs"<<Price<<endl;
    }

    int getPrice()
    {
        return Price;
    }

    string getName()
    {
        return Name;
    }
};

class Order
{
    static int TotalOrders;

    public:
    float calculateBill(float amount)
    {
        return amount;

    }

    float calculateBill(float amount,float discount)
    {
        return amount-(amount * discount/100);
    }

    void placeOrder(float total)
    {
        TotalOrders++;

        cout<<"\n===================Final Invoice====================\n";
        cout<<"The Total Bill Amount is: Rs"<<total<<endl;

        float finalAmount;
        if(total >= 500)
        {
            finalAmount=calculateBill(total,10);
            cout<<"10% discount Applied."<<endl;
        }
        else
        {
            finalAmount = calculateBill(total);
            cout<<"No discount Applied."<<endl;

        }
          cout<<"Final Amount is Rs : "<<finalAmount<<endl;
          cout<<"Order Placed Successfully...Enjoy Your Meal!"<<endl;
    }

    static void showTotalOrders()
    {
        cout<<"Total Orders Placed: "<<TotalOrders<<endl;
    }
};

int Order::TotalOrders=0;
int main()
{
    FoodItem menu[5] = {
        FoodItem(1,"Pizza",250),
        FoodItem(2,"Dosa",60),
        FoodItem(3,"Chai",20),
        FoodItem(4,"Idli",100),
        FoodItem(5,"Waffles",140)
    };
    

    Order order;
    int choice, quantity;
    float total = 0;
    cout<<"=======================================\n";
    cout<<"      IIT KUKAS CAFE\n";
    cout<<"=======================================\n";
    cout<<"-----------------MENU----------------\n";
    for(int i=0;i<5;i++)
    {
        menu[i].display();
    }

    cout<<"\nEnter 0 to Finish Ordering.\n";
    while(true)
    {
        cout<<"\nEnter the Item Id to Order: ";
        cin>>choice;
        if(choice==0)
        {
            break;
        }
        else if(choice<1 || choice>5)
        {
            cout<<"Invalid Choice! Please select a valid item id."<<endl;
            continue;
        }
        cout<<"Enter Quantity: ";
        cin>>quantity;

        if(quantity<=0)
        {
            cout<<"Invalid Quantity! Please enter a positive number."<<endl;
            continue;
        }

        float amount = menu[choice-1].getPrice() * quantity;

        total += amount;

        cout<<menu[choice-1].getName()<<"Added! Amount Rs. "<<amount<<endl;
    }
    if(total > 0)
    {
        order.placeOrder(total);
    }
    else
    {
        cout<<"No items ordered. Thank you for visiting!"<<endl;
    }
    Order::showTotalOrders();
    return 0;

}