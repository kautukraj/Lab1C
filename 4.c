#include <stdio.h>
#include <math.h>

int main ()
{
double a,b,c,D;
scanf ("%lf %lf %lf", &a, &b, &c);
D = (b*b) - (4*a*c);
 
 if (a!=0)
 {

if (D<0)
{

printf ("%.2lf+i%.2lf ", -b/(2*a), sqrt(-D) / (2*a));
printf ("%.2lf-i%.2lf", -b/(2*a), sqrt(-D) / (2*a));
}

else

{

printf ("%.2lf %.2lf", (-b + sqrt(D)) / (2*a), (-b - sqrt(D)) / (2*a));
}
}

return 0;

} 
