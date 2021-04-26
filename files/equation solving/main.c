#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y ,z , w;
    printf("ENTER THE VALUE OF X - \n");
    scanf("%d", &x);
    z = x*x;
    w = 3 * x ;
    y = z + w + 1;
    printf("THE VALUE OF Y IS --- %d\n", y);
    return 0;
}
