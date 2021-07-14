#include <stdio.h>
#include <stdlib.h>

int main(){
	int mat1[2][2],mat2[2][2],mat[2][2],i,j;

	printf("Enter Elements of Matrix 1: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter Element: ");
			scanf("%d", &mat1[i][j]);
		}
	}
  
	printf("\n");

	printf("Enter Elements of Matrix 2: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter Element: ");
			scanf("%d", &mat2[i][j]);
		}
	}

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			mat[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	printf("\n");
	
	printf("Output: \n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d \t", mat[i][j]);
		}
		printf("\n");
	}


	return 0;
}
