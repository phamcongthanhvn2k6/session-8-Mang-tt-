#include <stdio.h>

int main() {
    int n,so =1;

    printf("Nhap vao kich thuoc ma tran : ");
    scanf("%d", &n);
    
    int array[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        array [i][j] =so;
        so++;
        }
    }

    printf("Mang theo dang ma tran la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

