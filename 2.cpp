#include <stdio.h>

int main()
{
    int n, 
	sum = 0;
    bool valid_input = false;
    
    while (!valid_input)
    {
        printf ("Nhap vao mot so nguyen n trong khoang tu 10 den 100: ");
        scanf ("%d", &n);
        if (n >= 10 && n < 100)
        {
            valid_input = true;
        }
        else
        {
            printf ("Du lieu nhap vao khong hop le. Vui long nhap lai."  );
        }
    }

    for (int i = 1; i <= n; i++)
    {
        sum += i % 10 + i / 10;
    }
 +
   printf ("Tong cac chu so tu 1 den n  la: %d\n" ,sum );

    return 0;
}

