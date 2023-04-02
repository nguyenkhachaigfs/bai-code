#include <stdio.h>
#include <cmath>

int main()
{
    double x, term, sum = 0;
    int n = 0;
    
    printf( "Nhap x (rad): ");
    scanf("%f",&x); 
    
    term = x;
    while (abs(term) >= 0.0001)
    {
        sum += term;
        n++;
        term = pow(-1, n) * pow(x, 2*n+1) / tgamma(2*n+2);
    }
    
    printf( "Sin(x) = %f\n" , sum );
    
    return 0;
}

