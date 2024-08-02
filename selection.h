#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED
//Selection des coefficients
void coeff(cplx a,cplx b,cplx c)
{
    printf("Partie reelle de a:");
    scanf("%lf",&a.real);
    printf("Partie imaginaire de a:");
    scanf("%lf",&a.img);
    printf("Partie reelle de b:");
    scanf("%lf",&b.real);
    printf("Partie imaginaire de b:");
    scanf("%lf",&b.img);
    printf("Partie reelle de c:");
    scanf("%lf",&c.real);
    printf("Partie imaginaire de c:");
    scanf("%lf",&c.img);
    roots(a,b,c);

}

#endif // SELECTION_H_INCLUDED
