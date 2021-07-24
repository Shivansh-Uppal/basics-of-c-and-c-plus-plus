
#include <stdio.h>
#include<stdlib.h>

int main(){
     int *arr;
     arr=(int*)malloc(5*sizeof(int));
     for(int i=0;i<5;i++){
         scanf("%d",&arr[i]);
     }
     int *ar;
     ar=(int*)malloc(10*sizeof(int));
     for(int i=0;i<5;i++)
     ar[i]=arr[i];
     
     arr=ar;
     arr=NULL;
     free(arr);
     for(int i=0;i<5;i++){
         printf("%d ",ar[i]);
     }
    free(ar);
     
return 0;
}