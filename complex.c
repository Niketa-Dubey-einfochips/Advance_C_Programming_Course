#include<stdio.h>
#include<complex.h>
#define __STDC_WANT_LIB_EXT1__1

int main()
{
#ifdef __STDC_NO_COMPLEX__
        printf("complex number are not supported \n");
        exit(1);
#else
        printf("complex number are supported .\n");
#endif
    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;
    printf("working with complex numbers : \n");
    printf("starting value : cx = %.2f+ % .2fi  cy = %.2f+%.2fi\n", creal(cx),cimag(cx), creal(cy), cimag(cy) );
double complex sum = cx+cy;
printf("\n the sum cx+cy=%.2f+%.2fi \n", creal(sum), cimag(sum));

double complex difference = cx- cy;
printf("\n the difference cx-cy= %.2f%+.2fi\n", creal(difference), cimag(difference));

double complex product = cx*cy;
printf("\n the product cx-cy= %.2f%+.2fi\n", creal(product), cimag(product));


double complex division = cx/cy;
printf("\n the division cx-cy= %.2f%+.2fi\n", creal(division), cimag(division));


double complex conjugate= conj(cx);
printf("\n the conjugate cx and cy= %.2f+%.2fi\n", creal(conjugate), cimag(conjugate));

}