#include <iostream>
using namespace std;
class bank_account{
    private:
    int account_no;                      /* characristics*/
    double balance;
    char name[100];
    char account_type[100];
    char branch_name[100];
    int phone_number;
    int opening_balance;
    public:
    void display(){cout<<account_no<<balance<<name<<account_type<<branch_name<<phone_number<<opening_balance<<endl;
}
    void input(){
        cin>>account_no>>balance>>name>>account_type>>branch_name>>phone_number;
    }
    void fd(){}
    void deposit(){}
    void withdraw(){}
    void loan(){}
    void changepin(){}
    void beneficetary(){}
    void return_info(){}
    bank_account (void){opening_balance=10000;}
    bank_account (int b){opening_balance=b;
    }
};

int main(){
        bank_account cust1,cust2(30),cust3,cust4;   //objects
        
        cust1.input();
        cust1.display();  
return 0;
}