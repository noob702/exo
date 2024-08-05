#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED

void fibonacci(int a)
{
    int n,m;
    printf("Entrez la valeur de n:");
    scanf("%d",&n);
    m=n-1;
    int S,S1;
    int F;
        S=alpha*pow(1-nbor,n)+beta*pow(nbor,n);
        S1=alpha*pow(1-nbor,m)+beta*pow(nbor,m);
        F=S-S1;


    printf("F%d=%d\t  S(%d)=%d", n,F,n,S);
}

#endif // FIBONACCI_H_INCLUDED
