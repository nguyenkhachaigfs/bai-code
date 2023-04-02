#include <stdio.h>

int main() {
    int a, b, r;
    printf( "Nhap so nguyen duong a: " );
    scanf("%d",&a); 
    printf("Nhap so nguyen duong b: " );
    scanf("%d",&b); 

    if (a == 0 || b == 0) {
        printf("Khong ton tai uoc chung lon nhat" );
    }
    else {
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        printf("Uoc chung lon nhat cua a va b la: %d\n ", a );
    }
    return 0;
}

