#include<stdio.h>
int main(){
    int f,i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    f=1;
    i=1;
    while(i<=n){
    f=f*i;
    i=i+1;//i++
}
    printf("ans is %d\n",f);
    return 0;
}

