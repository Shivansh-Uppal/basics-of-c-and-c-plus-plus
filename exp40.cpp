#include <iostream>
#include<string.h>
using namespace std;
class student{
    private: 
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
class details:public student{
    char cl;
      public:
      void welcome(){
          cout<<"Welcome To Amity University\n";
          cout<<"Your Details are as follows: \n";
          display();
      }
      details(){
          cout<<"Enter the Class: ";
          cin>>cl;
      }
      void disp(){
          if(cl=='1' ||cl=='2' ||cl=='3' ||cl=='4'){
                cout<<"Your Faculty is: reema";
          }
          else{
              cout<<"Your Faculty is: semma";
          }
      }
};
int main(){
      class details cd;
      cd.welcome();
     
      cd.disp();
return 0;
}