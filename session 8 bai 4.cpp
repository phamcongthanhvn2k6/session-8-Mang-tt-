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
    int max=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(array[i][j]>max){
           	max = array[i][j];
		   }
		}
    }
    
    printf("Phan tu lon nhat trong mang la: %d", max);
    

    return 0;
}

