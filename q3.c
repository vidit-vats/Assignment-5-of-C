#include <stdio.h>

int main (int argc, char *argv[]) {

    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (i=n;i>=1;i--)
    printf("%d\n",i);
    
    return 0;
}