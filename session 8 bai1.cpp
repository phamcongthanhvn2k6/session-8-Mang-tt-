#include <stdio.h>

int main() {
    int mang;

    printf("Nhap vao so mang muon nhap: ");
    scanf("%d", &mang);
    

    int array[mang];

    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < mang; i++) {
            printf("Phan tu [%d]: ", i + 1);
            scanf("%d", &array[i]);
        
    }

    printf("Mang duoc in ra la: :\n");
    for (int i = 0; i < mang; i++) {
            printf("%d\n", array[i]);
    }

    return 0;
}

