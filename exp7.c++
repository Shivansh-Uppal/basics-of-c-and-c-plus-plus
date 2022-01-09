#include <iostream>
using namespace std;

int main(){
    int n,i=1;
     cin>>n;
     while(n>0){
         i=n*i;
         n--;
     }
     cout<<i;
return 0;
}