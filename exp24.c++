#include <iostream>
using namespace std;
class student{
    private:
     int roll_number;
     char name[100];
     int marks;
     char address[1000];
     int fee_paid;
    public:
    void display(){
        cout<<roll_number<<" "<<name<<" "<<marks<<" "<<address<<" "<<fee_paid<<" "<<"\n";
    
    }
    void input(){
        cin>>roll_number>>name>>marks>>address;
    }
    void initialize(){
    fee_paid=150000;}
};
int main(){
      student s1,s2,s3;
       cout<<"enter details of student 1 "<<endl;
      s1.input();
       cout<<"enter details of student 2 "<<endl;
      s2.input();
       cout<<"enter details of student 3 "<<endl;
      s3.input();
      s1.initialize();
      s2.initialize();
      s3.initialize();
      cout<<"details of student 1"<<" ";
      s1.display();
       cout<<"details of student 2"<<" ";
      s2.display();
       cout<<"details of student 3"<<" ";
      s3.display();
      
return 0;
}