#include <stdio.h>
#include<math.h>

	int main(){
		int n,i,j,so=1;
		printf("Nhap vao kich thuoc mang ban muon in ra: ");
		scanf("%d",&n);
		
		
		int array[n][n];
		
		printf("Nhap vao cac phan tu cua mang: \n");
		 for (int i = 0; i < n; i++) {
    		for (int j = 0; j < n; j++) {
        	array [i][j] =so;
        	so++;
        	}
			}
		
		
		printf("Mang theo ma tran la: \n");
		for (int i=0; i< n;i++){
			for (int j=0; j<n;j++){
				printf("%d ",array[i][j]);		
			}
			printf("\n");
		}
		int tong=0;
		for (int i=0; i< n;i++){
			for (int j=0; j<n;j++){
				if( i==0 || i==n-1 || j==0 || j==n-1){
					tong+=array[i][j];
				}
			}
		}
		
		printf("Tong cua cac so o duong bien la: %d\n",tong);
		
		return 0;
	}
