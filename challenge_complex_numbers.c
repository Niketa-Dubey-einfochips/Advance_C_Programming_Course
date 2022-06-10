#include<stdio.h>
#include<complex.h>
#include<math.h>
#define __STDC_WANT_LIB_EXT1__1

int main(void)
{
#ifdef __STDC_NO_COMPLEX__
        printf("complex number are not supported \n");
        exit(1);
#else
        printf("complex number are supported .\n");
#endif

double complex cx = I*I;

printf("\n the real and imaginary = %.2f%+.2fi", creal(cx), cimag(cx));

double _Complex z2 = pow(I,2);
printf("\n pow(I,2) = %.1f%+.1fi\n", creal(z2), cimag(z2));


double  PI = acos(-1);
double complex z3 = exp (I*PI);
printf("(1+2i)*(1-2i) = %.1f %+.1fi\n" , creal(z3), cimag(z3));
double complex z4 = 1+2*I , z5 = 1-2*I;
printf("(1+2i)*(1-2i) = %.1f %+ .1fi\n", creal(z4*z5), cimag(z4*z5));


return 0;
}
