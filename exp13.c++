#include <iostream>
#include<string.h>

using namespace std;
void num(int n){
     int cop,rev=0,dig;
     cop=n;
     do{
        dig=cop%10;
        rev=(rev*10)+dig;
        cop=cop/10;

     }while(cop!=0);
     if(n==rev){
         cout<<"number is palindrome"<<endl;
     }
     else{
         cout<<"number is not palindrome"<<endl;
     }
     return;
}

int main(){
    int ch,n,o;
    char s[20];
    do{
        cout<<"enter choice \n1.number\n2.string\n3.exit"<<endl;
        cin>>ch;
       switch(ch){
           case 1: 
           cout<<"enter the number"<<endl;
           cin>>n;
           num(n);
           break;

           case 2:
           char buffer;
           cout<<"enter a buffer character first and then main line: ";
           cin>>buffer;
           gets(s);
           
            int len=0,flag=0,i,j;
    char st[20];
    len=strlen(s)-1;
    for(i=len,j=0;i>=0;i--,j++){
       st[j]=s[i];
    }
    for(i=len,j=0;i>=0;i--,j++){
       cout<<st[j];
    }
    cout<<"\n";
    
    for(i=0,j=0;i<len;i++,j++){
    if(s[i]!=st[j]){
         cout<<"not palindrome"<<endl;
         break;
    }
    else{
        cout<<"palindrome"<<endl;
        break;
    }
       }
       }
    }while(ch!=3);
return 0;
}