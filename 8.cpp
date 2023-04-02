#include <stdio.h>

int main() {
    int choice;
    char tieptuc;
	int num1, num2, result;
    do {
        
        printf ("CHUONG TRINH TINH\n");
        printf ("1- Phep cong\n" );
        printf ("2- Phep tru\n" );
        printf ("3- Phep nhan\n" );
        printf ( "4- Phep chia\n" );
        printf ( "An phim khac: Thoat\n" );
        printf ("Moi ban lua chon chuong trinh:\n" );
        scanf("%d",&choice );
        switch (choice) {
			
            case 1:
            	
                printf  ("Ban da chon chuong trinh tinh tong \n " );
                printf ( "Nhap so thu 1: " );
                scanf ("%d", &num1 );
                printf  ("Nhap so thu 2: " );
                scanf ("%d", &num2 );
                result = num1 + num2;
                printf ( "Tong hai so la: %d\n", result );
                break;
            case 2:
            	
                printf ( "Ban da chon chuong trinh tinh hieu\n" );
                printf ( "Nhap so thu 1: " );
                scanf ("%d", &num1 );
                printf ( "Nhap so thu 2: " );
                scanf ("%d", &num2 );
                result = num1 - num2;
                printf ( "Hieu hai so la: %d\n", result );
                break;
            case 3:
            	
                printf ( "Ban da chon chuong trinh tinh tich\n" );
               printf ( "Nhap so thu 1: " );
                 scanf ("%d", &num1 );
                printf ( "Nhap so thu 2: " );
                 scanf ("%d", &num2 );
                result = num1 * num2;
                printf ( "Tich hai so la: %d\n", result  );
                break;
            case 4:
            	
                printf ( "Ban da chon chuong trinh tinh thuong\n" );
                printf ( "Nhap so thu 1: " );
                scanf ("%d", &num1 );
                printf  ("Nhap so thu 2: " );
                scanf ("%d", &num2 );
                if (num2 == 0) {
                    printf  ("Loi: khong the chia cho 0" );
                    break;
                }
                result = num1 / num2;
                printf  ("Thuong hai so la: %d\n ", result);
                break;
				default:
				printf ( "Ban da chon thoat chuong trinh" );
				return 0;
        }
        printf ( "Ban co muon tiep tuc chuong trinh (y/n) ? : " );
        scanf (" %c", &tieptuc);
	} while (tieptuc == 'y'|| tieptuc == 'Y');
    return 0;
}

