#include <stdio.h>
#include <math.h>

int main ()
{
double a,b,c;
scanf ("%lf %lf %lf", &a, &b, &c);
double r,r1,r2,real,i;
 
 if (a!=0)
 {
if ((b*b - 4*a*c)  > 0 )
{
 r1 = (-b + sqrt (b*b-4*a*c)) / 2*a ;
 r2 = (-b - sqrt (b*b-4*a*c)) / 2*a ;
 
 printf("%.2lf %.2lf\n", r1,r2);


}

else if ((b*b - 4*a*c) == 0 )
{
    r = (-b + sqrt (b*b-4*a*c)) / 2*a ;
    printf("%.2lf %.2lf\n", r,r);
    
}

else
{

if (b==0)
 real = 0;
 else
  real = -b / 2*a;
i = sqrt(4*a*c - b*b) / 2*a;
printf( "%.2lf +  i %.2lf %.2lf -  i %.2lf\n", real, i, real, i); 

}
 }
return 0;

}
