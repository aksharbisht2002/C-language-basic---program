#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ,temp ;
    printf("ENTER THE 1ST VALUE \n");
    scanf("%d",&a);
    printf("ENTER THE 2ND VALUE \n");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp ;

    printf("THE RESULT AFTER SWAP IS ---%d , %d",a , b);
    return 0;
}
