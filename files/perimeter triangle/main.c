#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a , b ,c , s, PERIMETER , area;
    printf("ENTER THE SIDE 1 \n");
    scanf("%f", &a);
    printf("ENTER THE SIDE 2 \n");
    scanf("%f", &b);
    printf("ENTER THE SIDE 3 \n");
    scanf("%f", &c);
    PERIMETER = a + b + c;
    s = PERIMETER / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("THE PERIMETER IS --- %f\n", PERIMETER);
    printf("THE SEMI PERIMETER (s) IS --- %f\n", s);
    printf("THE AREA OF TRIANGLE IS --- %f\n", area);
    return 0;
}
