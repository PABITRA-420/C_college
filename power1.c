#include<stdio.h>
int main(){
    int a,b,i,result;
    printf("Enter a,b\n");
    scanf("%d %d",&a,&b);
    result=1;
    i=1;
    do{
       result=result*a ;
       i=i+1;     
       }while(i<=b);
       printf("ans is %d",result);
    return 0;
    }
   
