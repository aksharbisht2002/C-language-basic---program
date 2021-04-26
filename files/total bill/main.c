#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q ;
    float v , dis , t , bill ;
    char i ;
    printf("ENTER THE ITEM NAME - \n");
    scanf("%c", &i);
    printf("ENTER THE ITEAM QUANTITY -\n");
    scanf("%d", &q);
    printf("ENTER THE VALUE \n");
    scanf("%f", &v);
    printf("ENTER THE DISCOUNT \n");
    scanf("%f", &dis);
    printf("ENTER THE TAX \n");
    scanf("%f", &t);
    bill = v * q * dis / 100 * t / 100 ;

    printf("THE ITEM NAME IS --- %c\n", i);
    printf("THE ITEAM QUANTITY IS --- %d\n", q);
    printf("THE VALUE IS --- %f\n", v);
    printf("THE DISCOUNT IS--- %f\n", dis);
    printf("THE TAX IS --- %f\n", t);
    printf("THE  TOTAL BILL  IS --- %f\n", bill);

    return 0;
}
