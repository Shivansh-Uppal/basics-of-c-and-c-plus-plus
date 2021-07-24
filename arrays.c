#include<stdio.h>

int main()
{
  //declearation types and initialization
  int a[]={2,4,6,,8,10,12};
  int a2[5]={2,4,6,8,10};
  int a3[5];
  int a4={0};
  int a5[5]={2,4};
  
  //accessing arrays
  for(int i=0;i<6;i++){
    printf("%d",a[i]);
  }
  
  printf("%d",a2[1]);
  printf("%d",1[a2]);
  printf("%d",*(a+2));
  
  return 0;
  
}
    
  
