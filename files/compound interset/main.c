#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, P,CI;
    int t = 5;

    /* Input principle and rate */
    printf("ENTER THE INTIAL PRINCIPAL BALANCE\n");
    scanf("%f", &P);
    printf("ENTER THE INTEREST RATE\n");
    scanf("%f", &r);
    //printf("ENTER THE NUMBER OF TIMES INTEREST APPLIED\n");
    //scanf("%d", &n);
    CI = P * (pow((1 + r / 100) , t));

    printf("THE FINAL AMOUNT CI IS --- %f", CI);

    return 0;
}
