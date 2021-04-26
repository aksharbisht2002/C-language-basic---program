#include <stdio.h>
#include <stdlib.h>

int main()
{   int a , b ;
    printf("ENTER THE 1ST VALUE\n");
    scanf("%d", &a);
    printf("ENTER THE 2ND VALUE\n");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;

    printf("THE RESULT AFTER SWAP IS ---%d , %d", a ,b);

    return 0;
}
