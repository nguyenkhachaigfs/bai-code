#include <stdio.h>

int main()
{
    double epsilon, e = 0, factorial = 1;
    int n = 0;
    
   printf( "Nhap vao so epsilon: " );
    scanf("%f", &epsilon);
    
    do
    {
        e += 1 / factorial;
        n++;
        factorial *= n;
    } while (1 / factorial >= epsilon);

    printf("Gia tri cua e la: %f\n", e );
    
    
	return 0;
    
}

