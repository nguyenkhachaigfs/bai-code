#include <stdio.h>
#include <cmath>

int main()
{
    double epsilon, pi = 0;
    int i = 0;
    
    printf("nhap vao so epsilon:");
	scanf("%f", &epsilon) ;
    
    do
    {
        pi += pow(-1, i) * 1 / (2 * i + 1);
        i++;
    } while (1 / (2 * i + 1) >= epsilon);

    pi *= 4;
   printf( "Gia tri cua pi la:%f\n" ,pi );
    
    return 0;
}

