#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int array[n];

    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int max_count = 0;
    int most_frequent = array[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            most_frequent = array[i];
        }
    }

    printf("Phan tu co so lan xuat hien nhieu nhat trong mang la: %d\n", most_frequent);
    printf("So lan xuat hien: %d\n", max_count);

    return 0;
}

