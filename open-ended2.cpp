#include <iostream>
#define MOD 100000007         //TO PREVENT INTEGER OVERFLOW
#define MAX 105
using namespace std;

class taxation{
     private:
     int slot1=MOD,slot2=MOD,n=MOD,ans;  //k is assigned as 4 by default
     long long int tax[MAX]={0};
     
     public:
     void welcome(){
           cout<<"~~~~~~~~~~~~~~~~~~~WELCOMING YOU TO MINISTRY OF SONA~~~~~~~~~~~~~~~~~"<<endl;
           cout<<"PAY TAX TO ENJOY BENEFITS"<<endl;
           cout<<"YOU CALCULATE YOUR UNITS OF TAX BY THIS SOFTWARE"<<endl;
     }
     
     taxation(){
 
         welcome();
         

        tax[0]=2;
        
        cout<<"enter the nth year to check for tax: ";
        cin>>n;
    
        cout<<"NOTE: more the tax you give more is benefits you get"<<endl;
      
        cout<<"enter the slot1 years: ";
        cin>>slot1;
        
        cout<<"enter the slot2 years: ";
        cin>>slot2;
          
     }
     
     void calculate(){
         
         for(int i=1;i<=slot1;i++){
                tax[i]=tax[i-1]+1;
         }

         for(int i=slot1+1;i<=slot1+slot2;i++){
                tax[i]=(tax[i-1]*2)%MOD;
         }

        for(int i=slot1+slot2+1;i<n;i++){
            tax[i]=(tax[i-4]*tax[i-3]*tax[i-2]*tax[i-1])%MOD; 
        }  
     }
     void display(){ 
         cout<<"Tax to be paid: "<<tax[n-1]<<" units"<<endl;
         cout<<endl<<"THANKING YOU, PAY TAX ON TIME TO NOT LEAVRAGE PENALITIES"<<endl;
         cout<<"HAVE A GOOD DAY\n"<<endl;
     }     
};

int main(){
      taxation tax;
      tax.calculate();
      tax.display();  
return 0;
}