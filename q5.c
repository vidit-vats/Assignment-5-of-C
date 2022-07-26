#include <stdio.h>

int main (int argc, char *argv[]) {

    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (i=n;i>=1;i--)
    printf("%d\n",(2*i-1));

    return 0;
}
