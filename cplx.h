#ifndef CPLX_H_INCLUDED
#define CPLX_H_INCLUDED
//Operations de base nombres complexes

  //carre d'un reel
  double sqrd1(double a)
  {
      double t=a*a;
      return(t);
  }
  //addition de deux complexes
 cplx add(cplx a,cplx b)
{
    cplx c;
    c.img=a.img+b.img;
    c.real=a.real+b.real;

        return(c);

}
 //multiplication de deux complexes
cplx tms(cplx a, cplx b)
{
    cplx c;
    c.real=(a.real*b.real)-(a.img*b.img);
    c.img=(a.real*b.img)+(b.real*a.img);
    return(c);
}
//conjugue d'un complexe
cplx cjg(cplx a)
{
    a.img=-a.img;
    return(a);
}
//multiplication par -1
cplx mns(cplx a)
{
    a.img=-a.img;
    a.real=-a.real;
    return(a);
}
//carre d'un complexe
  cplx sqrd(cplx a)
  {
      return(tms(a,a));
  }
  //module d'un complexe
double mod(cplx a)
{
    double m=sqrd1(a.real)+sqrd1(a.img);
    double t=sqrt(m);
    return(t);
}
//racines carres d'un complexe
    Sol sqrt_cplx(cplx a)
     {
    Sol result;
    cplx r;
    if(a.img==0)
    {
        if(a.real>0)
        {

        r.real=sqrt(a.real);
        r.img=0;
        }
        else
      {
        double temp=-a.real;
         r.real=0;
         r.img=sqrt(temp);
      }
    }
      else
   {
       if(a.real==0)
       {
           r.real=mod(a)/sqrt(2);
           r.img=r.real;
       }
else{
    r.real = sqrt((sqrd1(mod(a))+a.real)/2);
    r.img =a.img/2*r.real;
}
   }
    result.x1=r;
    result.x2=mns(r);

    return result;
    }
    //division de deux complexes
    cplx div_cplx(cplx a, cplx b)
    {
    cplx result,t;
    double denom =b.real*b.real+b.img*b.img;
    t=tms(a,cjg(b));
    result.real =t.real/denom;
    result.img =t.img/denom;
    return result;
}
//affichage des complexes

void print(cplx a)
{
    if(a.real!=0 && a.img!=0)
    {
        if(a.img<0)
        {


          printf("%lf%lfi\t", a.real, a.img );
        }
        else{
            printf("%lf+%lfi\t", a.real, a.img );
        }
    }
    else
    {
        if(a.real==0 && a.img!=0)
        {
          printf("%lfi\t", a.img );

        }
        if(a.real!=0 && a.img==0)
            {
               printf("%lf\t", a.real );
            }


    }


}



#endif // CPLX_H_INCLUDED
