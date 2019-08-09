#include <stdio.h>

#define PI 3.14
int main ()
{

float radius=0.0;
float area=0.0;
scanf("%f", &radius);
if (radius<0)
printf("Invalid input\n");

else
{
	
area = PI * radius * radius;
printf ("%.2f \n" , area);
}

return 0;

}
