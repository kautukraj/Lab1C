#include <stdio.h>

int main ()
{

int n1,n2;
int rem;
scanf ("%d  %d", &n1, &n2);
 if (n1<=0 || n2<=0)
 printf("Invalid input\n");
 else
 {
    if (n1>n2)
	rem = n1%n2;
	
	else if (n2>n1)
	rem = n2%n1;
	
	else
	printf ("Both numbers are equal so remainder is 0\n");
	
	printf("%d\n",rem);
}
	
	return 0;
}
