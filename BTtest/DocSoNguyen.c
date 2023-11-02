#include <stdio.h>

void read_number(int n) {
    if (n == 0) {
        printf("khong");
        return;
    }

    int HangTram = n / 100;
    int HangChuc = (n / 10) % 10;
    int HangDonVi = n % 10;

    
    if (HangTram > 0) {
        switch= (HangTram ) {
            case 1:
                printf("mot tram ");
                break;
            case 2:
                printf("hai tram ");
                break;
            case 3:
                printf("ba tram ");
                break;
            case 4:
                printf("bon tram ");
                break;
            case 5:
                printf("nam tram ");
                break;
            case 6:
                printf("sau tram ");
                break;
            case 7:
                printf("bay tram ");
                break;
            case 8:
                printf("tam tram ");
                break;
            case 9:
                printf("chin tram ");
                break;
        }
    }

    if (HangChuc > 0) {
        switch (HangChuc) {
            case 1:
                printf("muoi ");
                break;
            case 2:
                printf("hai muoi ");
                break;
            case 3:
                printf("ba muoi ");
                break;
            case 4:
                printf("bon muoi ");
                break;
            case 5:
                printf("nam muoi ");
                break;
            case 6:
                printf("sau muoi ");
                break;
            case 7:
                printf("bay muoi ");
                break;
            case 8:
                printf("tam muoi ");
                break;
            case 9:
                printf("chin muoi ");
                break;
        }
    }

    if (HangDonVi > 0) {
        switch (HangDonVi ) {
            case 1:
                printf("mot");
                break;
            case 2:
                printf("hai");
                break;
            case 3:
                printf("ba");
                break;
            case 4:
                printf("bon");
                break;
            case 5:
                printf("nam");
                break;
            case 6:
                printf("sau");
                break;
            case 7:
                printf("bay");
                break;
            case 8:
                printf("tam");
                break;
            case 9:
                printf("chin");
                break;
        }
    }
}

int main() {
    int n;

    printf("Nhap so nguyen duong n (0 < n < 1000): ");
    scanf("%d", &n);

    printf("Cach doc cua %d: ", n);
    read_number(n);

    return 0;
}          
