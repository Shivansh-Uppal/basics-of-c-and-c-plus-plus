#include <iostream>
#include <stdio.h>
using namespace std;

class basicInfo
{
    protected:  
        char name[30];
        int  id;
        char gender;
        double fund=0;
    public:
        void getBasicInfo()
        {
            cout << "Enter Name: "; 
            cin>>name;
            cout << "Enter Emp. Id: ";
            cin  >> id;
            cout << "Enter Gender: ";
            cin  >> gender;
        }
};
class pf: public basicInfo{
    public:
     pf(double provident){
              fund=provident+1000;
              cout<<"tax saved: "<<fund;   
     }
};
class deptInfo: public basicInfo
{
    protected:  
        char dept[30];
        char work[30];
        int  time_given;
        int pf;
    public:
        void getDeptInfo(void)
        {
            getBasicInfo(); 
            cout << "Enter Department Name: "; 
            cin>>dept;
            cout << "Enter assigned work: ";
            cin>>work;
            cout << "Enter time in hours to complete work: ";
            cin  >> time_given;   
        }
        void printDeptInfo(void)
        {
            cout << "\nEmployee's Information is: " << endl;
            cout << "Basic Information...:"<< endl;
            cout << "Name: "<< name<< endl;      
            cout << "Employee ID: "<< id<< endl;     
            cout << "Gender: "<< gender<< endl << endl;
             
            cout << "Department Information...:" << endl;
            cout << "Department Name: " << dept << endl; 
            cout << "Assigned Work: "<< work<< endl; 
            cout << "Time to complete work: "<< time_given<< endl; 

        }
};
 
int main()
{
    double provident;
    class deptInfo D;
    D.getDeptInfo();
    cout<<"Enter the pf amount to save tax: ";
    cin>>provident;
    D.printDeptInfo();  
    class pf p1(provident);
    return 0;
}