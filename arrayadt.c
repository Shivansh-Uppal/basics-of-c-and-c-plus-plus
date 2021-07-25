#include <stdio.h>
#include<stdlib.h>
struct array{
    int a[20];
    int size;
    int length;
};
    void display(struct array arr)
    {
     int i;
     printf("elements are\n");
     for(i=0;i<arr.length;i++)
     printf("%d ",arr.a[i]);
     return;
}

int main(){
    struct array arr={{2,3,4,5,6},10,5};
     int n;

   
     
     display(arr);
return 0;
}