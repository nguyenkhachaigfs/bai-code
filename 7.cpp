#include <stdio.h>

int main() {
    int a, b, gcd, lcm ;
    printf( "Nhap so nguyen a: " );
    scanf("%d",&a); 
    printf("Nhap so nguyen b: " );
    scanf("%d",&b); 
    
    for (int i =1; i <= a && i<= b; ++i){
       if (a % i == 0 && b % i == 0);
           gcd = i ;
       
    }
    
    lcm = (a * b) / gcd;
	printf("boi so chung nho nhat cua a va b là: %d\n",lcm);
	
	return 0;
}
