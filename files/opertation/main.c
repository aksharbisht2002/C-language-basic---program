#include <stdio.h>
#include <stdlib.h>

int main()
{   int n1, n2 , result; //decration
    printf("enter value 1 no");
    scanf("%d" ,&n1);
    printf("enter value 2 no");
    scanf("%d" ,&n2);
    result = n1 * n2;

    printf("result after operation is -- %d", result);
    return 0;
}
