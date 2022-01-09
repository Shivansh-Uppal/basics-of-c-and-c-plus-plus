#include <iostream>
using namespace std;
class student{
    protected: 
    char name[50];
    int roll_number;
    public: 
    student(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll number: ";
        cin>>roll_number;
    }
    void display(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll number is: "<<roll_number<<endl;
    }  
};
class exam:public student{
       int marks1,marks2,marks3;
       protected:
       float total_marks;
       public:
       exam(){
           cout<<"maximum marks for each exam are: 10"<<endl;
           cout<<"enter marks1: ";
           cin>>marks1;
           cout<<"enter marks2: ";
           cin>>marks2;
           cout<<"enter marks3: ";
           cin>>marks3;
           total_marks=marks1+marks2+marks3;
       } 
       void display1(){
             cout<<"Dear "<<name<<endl;
             cout<<"Your roll number is: "<<roll_number<<endl;
       } 
};
class result:protected exam{
       float result_entry;
       public:
        void result_dec(){
            result_entry=(total_marks/30)*100;
        }
        void display(){
            display1();
            cout<<"your % is: "<<result_entry<<endl;
        }
};
int main(){
     result r;
     r.result_dec();
     r.display();
return 0;
}
