#ifndef QUADRATIC_H_INCLUDED
#define QUADRATIC_H_INCLUDED
//Resolution de l'equation dans C
 void roots(cplx a, cplx b,cplx c )
{
     cplx D,d1,d2,m,n,p1,p2;
     Sol s,d;
     cplx l={4,0};
     cplx k={2,0};
     m=sqrd(b);//-b^2
     n=mns(tms(a,c));
     D=add(m,tms(n,l));//calcul detla
     d=sqrt_cplx(D);//racines delta
     d1=d.x1;
     d2=d.x2;
     p1=add(mns(b),d1);
     p2=add(mns(b),d2);
     s.x1=div_cplx(p1,tms(a,k));
     s.x2=div_cplx(p2,tms(a,k));
     printf("les solutions de l'equation sont:\t");
     print(s.x1);printf("\t\t");
     print(s.x2);

}


#endif // QUADRATIC_H_INCLUDED
