#include<stdio.h>
int main(){
    int a,b,i,result;
    printf("Enter a,b\n");
    scanf("%d %d",&a,&b);
    result=1;
    for(i=1;i<=b;i++){
       result=result*a  ;
        }
       printf("ans is %d",result);
    return 0;
    }
    
