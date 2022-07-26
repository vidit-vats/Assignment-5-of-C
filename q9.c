#include <stdio.h>

int main (int argc, char *argv[]) {

    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    printf("%d\n",(i*i*i));

    return 0;
}