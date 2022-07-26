#include <stdio.h>

int main (int argc, char *argv[]) {
    int n,i,j;
    printf("Enter the no whose table is to be printed: ");
    scanf("%d",&n);

    printf("How many times table is to be printed: ");
    scanf("%d",&j);

    for (i=1;i<=j;i++)
    
        printf("%d*%d=%d\n",n,i,n*i);

    return 0;
}