#include <iostream>
#include<strings.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

class bank{
      protected:
      string name;
      int deposit,deposit2,deposit3,deposit4,withdraw,intrest,choose;
      int fund_balance=0;
      char aadhar_number[15]={0};
      public:
      void bank_DETAILS(){
          cout<<"---------------------------------------"<<endl;
          deposit=deposit2=deposit3=deposit4=withdraw=intrest=0;
          cout<<"Enter your name: ";
          cin>>name;
          cout<<"Welcome to Shivansh Bank"<<endl;
          cout<<"Your fund_balance is: "<<fund_balance<<endl;
          
          cout<<"Want to add money to funds (1.YES 2.NO)?: ";
          cin>>choose;
          while(fund_balance==0){
          if(choose==1){
          cout<<"Enter the money to add: ";
          cin>>fund_balance;

          }
          else
          cout<<"PLEASE, TO OPERATE OUR BANK SERVICES FUNDS NEEDS TO BE ADDED"<<endl;
          cout<<"Enter the money to add: ";
          cin>>fund_balance;
      }
      }
};

class account: protected virtual bank{
      public:
      void deposit_money();
      void loan();
      void withdraw_money();
      void fd();
      void rd();
      void zero_balance();
      void fixed_balance();
};

void account::deposit_money(){
    system("CLS");
    int choice;
    do{
        cout<<"----------------------------------------"<<endl;
        cout<<"                    MENU                "<<endl;
        cout<<"1.fixed deposit\n2.recurring deposit\n3.Zero balance account\n4.Fixed balance account\n5.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            fd();
            break;

            case 2:
            rd();
            break;

            case 3:
            zero_balance();
            break;

            case 4:
            fixed_balance();
            break;

            default:
            cout<<name<<" please enter correct choice"; 
            break;
        }
    }while(choice!=5);
}

void account::fd(){
    system("CLS");
    int choice;
    cout<<"You want to open fd in bank (1=YES & 0=NO)?"<<endl;
    cin>>choice;
    if(choice!=0 && choice!=1){
        cout<<name<<" please enter correct choice: ";
        cin>>choice;
    }

    else if(choice==1){
        cout<<name<<" hello! We are pleased to inform you new rates of fd"<<endl;
        cout<<"According to government regulation act\nfd rate of intrest is 6.2% "<<endl;
        cout<<"Enter the ammount you want to deposit:"<<endl;
        scanf("%d",&deposit);
        fund_balance+=deposit;
    }
    else{
        return;
    }

}

void account::rd(){
    system("CLS");
    int choice;
    cout<<"You want to open rd in bank (1=YES & 0=NO)?"<<endl;
    cin>>choice;
    if(choice!=0 && choice!=1){
        cout<<name<<" please enter correct choice: ";
        cin>>choice;
    }

    else if(choice==1){
        cout<<name<<" hello! We are pleased to inform you new rates of rd"<<endl;
        cout<<"According to government regulation act\nfd rate of intrest is 7.2% "<<endl;
        cout<<"Enter the ammount you want to deposit:"<<endl;
        scanf("%d",&deposit2);
        fund_balance+=deposit2;
    }

    else{
        return;
    }
}

void account::zero_balance(){
    system("CLS");
    int choice;
    cout<<"You want to open zero balance in bank (1=YES & 0=NO)?"<<endl;
    cin>>choice;
    if(choice!=0 && choice!=1){
        cout<<name<<" please enter correct choice: ";
        cin>>choice;
    }

    else if(choice==1){
        cout<<"Enter the amount you want to deposit:"<<endl;
        scanf("%d",&deposit3);
        fund_balance+=deposit3;
    }

    else{
        return;
    }
}

void account::fixed_balance(){
    system("CLS");
     int choice;
    cout<<"You want to open fixed balance in bank (1=YES & 0=NO)?"<<endl;
    cin>>choice;
    
    if(choice!=0 && choice!=1){
        cout<<name<<" please enter correct choice: ";
        cin>>choice;
    }

    else if(choice==1){
        if(fund_balance>=25000){
        cout<<"You can continue!"<<endl;
    }
    else{
        cout<<"You can raise funds"<<endl;
        cout<<"1.YES \nor \nAny number to exit"<<endl;
        cin>>choice;
        if(choice==1){
            cin>>fund_balance;
        }
        else{
            return;
        }
    }
        cout<<"Enter the ammount you want to deposit:"<<endl;
        scanf("%d",&deposit4);
        fund_balance+=deposit4;
    }

    else{
        return;
    }
}

void account::loan(){
    system("CLS");
    int i=0;
    if(fund_balance>50000){
        cout<<"Congeratulations! "<<name<<" you are eligible to apply for loan";
        cout<<"Please enter your 10 digit aadhar number: ";
        cin>>aadhar_number;
        while(aadhar_number[i]!='\0'){
             i++;
        }
        if(i<10 || i>10){
             cout<<"Enter the aadhar number correctly"<<endl;
             cout<<"Please enter your 10 digit aadhar number: ";
             cin>>aadhar_number;     
        }

        if(fund_balance<100000){
            cout<<"You can apply for maximum loan of 10000 for 6 months"<<endl;
            deposit3=10000;
        }

        else{
            cout<<"We offer only for 6 months loan with 7.5% intrest"<<endl;
             cout<<"How much loan you want ? : ";
             cin>>deposit4;
        }
    }
}

void account::withdraw_money(){
    system("CLS");
    if(deposit2!=0){
        cout<<"How much to withdraw ?"<<endl;
        cin>>withdraw;
        if(withdraw>fund_balance){
            cout<<"Sorry funds not available"<<endl;
            cout<<"Please re-enter withdraw limit: ";
            cin>>withdraw;
        }
        else{
              if(fund_balance-withdraw<25000){
                  cout<<"Sorry funds not available"<<endl;
                  cout<<"Please re-enter withdraw limit: ";
                  cin>>withdraw;
              }
              else{
                  cout<<"Sucessfull"<<endl;
                  fund_balance-=withdraw;
              }
        }
    }
    else{
          cout<<"How much to withdraw ?"<<endl;
        cin>>withdraw;
        if(withdraw>fund_balance){
            cout<<"Sorry funds not available"<<endl;
            cout<<"Please re-enter withdraw limit: ";
            cin>>withdraw;
        }
        else{
              
                  cout<<"Sucessfull"<<endl;
                  fund_balance-=withdraw;
              
        }
    }
}

class display:protected virtual bank,protected account{
         public:
         void statement();
};

void display::statement(){
    system("CLS");
    cout<<name<<endl;
    cout<<fund_balance<<endl;
}
int main(){
    int choice,choice2;
    bank b1;
    b1.bank_DETAILS();
     do{
         cout<<"-----------------------------------------"<<endl;
         cout<<"                    MENU                 "<<endl;
         cout<<"1.account operations\n2.mini statement\n3.exit\n";
         cin>>choice;
         account a1;
         switch(choice){
            case 1: {
                do{
                    cout<<"-----------------------------------------"<<endl;
                    cout<<"                    MENU                 "<<endl;
                cout<<"1.deposit_money\n2.loan\n3.withdraw_money\n4.fd\n5.rd\n6.zero balance\n7.fixed balance\n8.exit\n";
                cin>>choice2;
                switch(choice2){
                    case 1:
                    {
                        a1.deposit_money();
                    }
                    break;

                    case 2:{
                         a1.loan();
                    }
                    break;

                    case 3:
                    {
                        a1.withdraw_money();
                    }
                    break;

                    case 4:
                    {
                      a1.fd();
                    }
                    break;

                    case 5:{
                        a1.rd();
                    }
                    break;

                    case 6:{
                       a1.zero_balance();
                    }
                    break;

                    case 7:
                    {
                       a1.fixed_balance();
                    }
                    break;
                }
                }while(choice2!=8);   
            }
            break;

            case 2:
            {
                display d1;
                d1.statement();
            }
            break;

         }
     }while(choice!=3);
return 0;
}