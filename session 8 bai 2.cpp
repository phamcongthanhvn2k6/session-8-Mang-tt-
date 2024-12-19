#include <stdio.h>

int main() {
    
    int array[] = {2, 4, 6, 8, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int phantu, trangthai = 0;

    
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &phantu);

   
    for (int i = 0; i < n; i++) {
        if (array[i] == phantu) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            trangthai = 1;
            break;
        }
    }

    if (!trangthai) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

