#include <stdio.h>
#include <math.h>

int main() {
    int hang, cot;
    printf("Nhap vao so hang: ");
    scanf("%d", &hang);
    printf("Nhap vao so cot: ");
    scanf("%d", &cot);
    
    if (hang != cot) {
        printf("day khong phai la ma tran vuong.\n");
        return 1;
    }

    int array[hang][cot];
    
    printf("Nhap vao cac phan tu cua mang: \n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap vao phan tu hang %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Mang theo ma tran là: \n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", array[i][j]);        
        }
        printf("\n");
    }

    int tong = 0;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                tong += array[i][j];
            }
        }
    }
    printf("Tong các phan tu trên duong bien la: %d\n", tong);

    int tongDuongCheoChinh = 0;
    printf("Cac so tren duong cheo chinh la: ");
    for (int i = 0; i < hang; i++) {
        printf("%d ", array[i][i]);
        tongDuongCheoChinh += array[i][i];
    }
    printf("\n tong duong cheo chinh la: %d\n", tongDuongCheoChinh);

    int tongDuongCheoPhu = 0;
    printf("Cac so tren duong cheo phu là: ");
    for (int i = 0; i < hang; i++) {
        printf("%d ", array[i][hang - i - 1]);
        tongDuongCheoPhu += array[i][hang - i - 1];
    }
    printf("\n Tong duong cheo phu la: %d\n", tongDuongCheoPhu);

    return 0;
}

