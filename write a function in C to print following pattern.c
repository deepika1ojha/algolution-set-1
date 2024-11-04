#include<stdio.h>
int main(){
int i,j,n;
printf("enter the number of rows : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
   if(i==1||i==n){
     for(j=1;j<=n;j++){
        printf("1");
      }
   }
   else{
       for(j=1;j<=n;j++){
          if(j==1||j==n){
            printf("1");
          }
          else{
            printf("0");
          }
       }
   }
   printf("\n");
}
return 0;
}


