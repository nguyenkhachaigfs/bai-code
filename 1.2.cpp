#include <stdio.h>

int main()
{
    int n, 
	giaithua = 1;
    printf ( "Nhap vao mot so nguyen duong n (n < 8): ");
    scanf  ("%d", &n);
    do
    {
        giaithua *= n;
        n--;
    } while (n > 0 );
    printf ("Giai thua cua n la: %d\n",giaithua);
    return 0;
}

