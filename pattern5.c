#include <stdio.h>

int main() {
    int i,n,j,k;
    printf("enter terms no :");
    scanf("%d",&n);
    k=1;
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=i;j++){
        printf("%d ",k%2);
        k=k+1;
        }

    }
    return 0;
}
/*
1
0 1
0 1 0
1 0 1 0

*/