#include <stdio.h>

int main()
{
    int n, 
	giaithua = 1;
    printf  ("Nhap vao mot so nguyen duong n (n < 8): ");
    scanf("%d",&n);
    while (n>0)
    {
        giaithua *= n;
		n--;
    }
   printf ("Giai thua cua n la: %d\n",giaithua);
    return 0;
}
