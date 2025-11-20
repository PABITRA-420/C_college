#include<stdio.h>
int main(){
    int n,i,s,r;
    printf("Enter the input number\n");
    scanf("%d",&n);
    s=0;
    for(i=n;i!=0;i=i/10){
       r=i%10;
       s=s+r;
       }
    printf("\nthe sum of all digit is %d",s);
 return 0;   
}
