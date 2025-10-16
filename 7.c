include <stdio.h>
#include <float.h>
int main ()
{
float nf = 1.0/3.0;
double nd = 1.0/3.0;
printf("float: %.4f; double: %.4f \n", nf, nd);
printf("float: %.12f; double: %.12f \n", nf, nd);
printf("float: %.16f; double: %.16f \n", nf, nd);
printf("%d %d", FLT_DIG, DBL_DIG);
return 0;
}
