#include<stdio.h>
int main(){
    int a,b,n,r,i,j,l;
    printf("Enter two numbers to find GCD:\n");
    scanf("%d %d",&a,&b);
    for ( i = a,j=b ;i%j!=0;)
    {
        r=i%j;
        i=j;
        j=r;
    }
    printf("gcd of %d,%d is %d",a,b,j);
    return 0;   
}

