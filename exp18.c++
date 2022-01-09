#include <iostream>
#define largest(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c)
using namespace std;
int main(){
   int a,b,c;
   cout<<"enter 3 integers"<<endl;
   cin>>a>>b>>c;
   int result;
   result=largest(a,b,c);
   cout<<result;
return 0;
}
