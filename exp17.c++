#include <iostream>
using namespace std;
int main(){
      int sum(int,int); 
 
int sum(int[],int); 

int a,b,c,d,result;

cout<<"for 2 argument\n";
cout<<"Enter 2 Integers\n";
cin>>a>>b;
result=sum(a,b);
cout<<"Add =" << result;


cout<<"\n\nHow many Argument You want to enter:-";
int no;
cin>>no;
int num[50];
cout<<"Enter "<< no <<" Integers\n";
for(int i=0;i < no ;i++)
cin>>num[i];
result=sum(num,no);
cout<<"Add =" << result;

return 0;
}



int sum(int a,int b)
{
return(a+b);
}

int sum(int a[],int n)
{
int sum=0;
for(int i=0;i < n;i++)
{
sum=sum+a[i];
}
return(sum);
}
