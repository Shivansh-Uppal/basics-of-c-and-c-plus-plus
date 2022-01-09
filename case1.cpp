#include <iostream>
using namespace std;
class student{
     protected:
     int roll;
     int section;
     char name[100];

     public:
     student(){
         cout<<"WELCOME TO AMITY UNIVERSITY NOIDA\n";
         cout<<"DEAR, STUDENT PLEASE ENTER YOUR DETAILS FOR COMPLETE RESULT\n";
         cout<<"Please enter your name: ";
         cin.getline(name,100,'\n');
         cout<<"Enter your section: ";
         cin>>section;
         cout<<"Enter your roll number: ";
         cin>>roll;
     }
};
class exam:public student{
      protected:
      int sub1,sub2,sub3,sub4,sub5,sub6;

      public:
      exam(){
          cout<<"REMEMBER: "<<name<<" enter marks only out of 100\n";
          
          cout<<"Enter the marks for subject 1: ";
          cin>>sub1;

                cout<<"Enter the marks for subject 2: ";
                cin>>sub2;

                cout<<"Enter the marks for subject 3: ";
                cin>>sub3;
          
                cout<<"Enter the marks for subject 4: ";
                cin>>sub4;
        
                cout<<"Enter the marks for subject 5: ";
                cin>>sub5;
         
                cout<<"Enter the marks for subject 6: ";
                cin>>sub6;
      }
      double ret(){
           return sub1+sub2+sub3+sub4+sub5+sub6;
      }
      void dip(){
          cout<<"NAME: "<<name<<endl;
          cout<<"SECTION: "<<section<<endl;
          cout<<"ROLL NUMBER: "<<roll<<endl;
      }
};
class result:public exam{
          private:
          float total_marks;
          float max;
          double percent;
        
        public:
          result(){
              max=600;
              total_marks=ret();
              percent=(total_marks/max)*100;
          }
          void display(){
              cout<<"\nSTUDENT YOUR RESULT IS........\n";
              dip();
              cout<<"STUDENT Your total marks are: "<<total_marks<<"/"<<max;
               cout<<"\nYOUR percentage is: "<<percent;
               if(percent>=70){
                   cout<<"\nYour grade is A"<<endl;
               }
               else if(percent>=50 && percent<70){
                   cout<<"Your grade is B"<<endl;
               }
               else if(percent>=33 && percent<50){
                   cout<<"Your grade is C"<<endl;
               }
               else{
                   cout<<"You failed"<<endl;
               }
          }
};
int main(){
        result stud1;
        stud1.display();
return 0;
}