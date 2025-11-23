#include <stdio.h>

int main() {
    int i,n,j;
    char ch=65;
    printf("enter terms no :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=i;j++){
        printf("%c ",ch);
        }
        ch=ch+1;

    }
    
    return 0;
}
/*
A 
B B
C C C
D D D D
E E E E E

*/