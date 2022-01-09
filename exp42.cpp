//multiple for employee
#include <iostream>
using namespace std;
class employee{
     protected:
     char name[20];
     int id;
     char branch[30];
     public:
     void employee_details(){
         cout<<"enter your name"<<endl;
         cin>>name;
         cout<<"enter your id"<<endl;
         cin>>id;
         cout<<"enter your branch"<<endl;
         cin>>branch;
     }
};
class authority{
         protected:
         char dept[30];
         char work[30];
         int time_given;
         public:
         void info(){
             cout<<"enter department assigned"<<endl;
             cin>>dept;
             cout<<"enter work given"<<endl;
             cin>>work;
             cout<<"enter time given"<<endl;
             cin>>time_given;
         }
};
class display: public authority,public employee{
    public:
         void getinfo(){
           cout<<"enter your details"<<endl;
           employee_details();
           cout<<"enter your department details"<<endl;
           info();
         }
         void display2(){
             cout<<"Employee's info are"<<endl;
             cout<<"name: "<<name<<endl;
             cout<<"id: "<<id<<endl;
             cout<<"branch: "<<branch<<endl;

             cout<<"Authority info are"<<endl;
             cout<<"department: "<<dept<<endl;
             cout<<"work given: "<<work<<endl;
             cout<<"time given: "<<time_given<<endl;
         }
};
int main(){
      class display e1;
      e1.getinfo();
      e1.display2();
return 0;
}