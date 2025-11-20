#include<stdio.h>
int main(){
    int f,i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    f=1;
   for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("Factorial of %d is %d\n",n,f);
    return 0;
}

