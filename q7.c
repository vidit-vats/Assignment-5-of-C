#include <stdio.h>

int main (int argc, char *argv[]) {

    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    
    for (i=n;i>=1;i--)
    printf("%d\n",2*i);

    return 0;
}