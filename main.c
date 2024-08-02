#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "typedef.h"
#include "cplx.h"
#include "quadratic.h"
#include "selection.h"

int main()
{
    int A=0;
    do
    {
    printf("Entrez 1 pour resoudre une equation du second degre dans C: ");
    scanf("%d",&A);
    }
    while(A!=1);
        if(A=1)
    {
       cplx a,b,c;
       coeff(a,b,c);

    }



    return 0;
}
