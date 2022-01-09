#include <iostream>
#include<conio.h>
using namespace std;
int largest(int,int,int);
int main(){
     int a,b,c;
   cout<<"enter 3 integers"<<endl;
   cin>>a>>b>>c;
   int result;
   result=largest(a,b,c);
   cout<<result;
return 0;
}
inline int largest(int a,int b,int c){
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}