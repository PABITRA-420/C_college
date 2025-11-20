#include <stdio.h>

int main() {
    int a,b,c,i,j,l;
    printf("enter 2 number : ");
    scanf("%d%d",&a,&b);
    for(i=a,j=b;i%j!=0;){
        c=i%j;
        i=j;
        j=c;
    }
    printf("gcd is %d",j);
    l=(a*b)/j;
    printf("\nlcm is %d",l);
    return 0;
}
