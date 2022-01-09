#include <iostream>
using namespace std;
int m=10;
int main(){
  int m=40;
  {
     int k;
     k=m;
     cout<<k<<endl;
     cout<<m<<endl;
     cout<<::m<<endl;
  }
     cout<<m<<endl;
     cout<<::m;
  
  
return 0;
}