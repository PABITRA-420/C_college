#include <stdio.h>

int main() {
    int i,n,r,rev;
    rev=0;
    printf("ENTER NO. TO CHECK : ");
    scanf("%d",&n);
    rev=0;

    for(i=n;i!=0; i=i/10){
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==n){
    printf("%d this no is palindrome",n);
    }else{
        printf("%d this no is palindrome",n);
    }
    return 0;
}
