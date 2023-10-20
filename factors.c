#include <stdio.h>

int main()
{
    long long int numb = 239809320265259;
    long int factor_A = 2;
    long int factor_B;

    while (numb % factor_A)
    {
        if (factor_A <= numb)
        {
            factor_A++;
        }
        else {
            return (-1);
        }
    }

    factor_B = numb / factor_A;
    printf("%lld = %ld * %ld\n", numb, factor_B, factor_A);
    return (0);
}
