#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "headers.h"

int main()
{
    int A=0;
    cplx a,b,c;
    int f;
    do
    {
    printf("Entrez:- 1 pour resoudre une equation du second degre dans C\n\t-2 pour la suite de fibonacci\n\t: ");
    scanf("%d",&A);
    }
    while(A!=1 && A!=2);
    switch(A)

    {
    case 1:
       coeff(a,b,c);
       break;
    case 2:
        fibonacci(f);
        break;

    }
    return 0;
}
