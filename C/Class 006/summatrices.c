#include <stdio.h>
void readMatrix(int[][10], int, int);
void displayMatrix(int[][10], int, int);
void sumMatrix(int[][10], int[][10], int[][10], int, int);

void readMatrix(int matrix[][10], int rows, int cols){
	int i, j;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
}

void displayMatrix(int matrix[][10], int rows, int cols){
	int i, j;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void sumMatrix(int A[][10], int B[][10], int C[][10], int rows, int cols){
	int i, j;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}

int main(){
	int rows, cols;
	int A[10][10], B[10][10], C[10][10];
	printf("Enter the number of rows and columns of the matrices: \n");
	scanf("%d %d", &rows, &cols);
	if(rows<=0 || cols>10){
		printf("\nInvalid Matrix size");
		return 1;
	}
	printf("Enter the elements of matrix A: \n");
	readMatrix(A, rows, cols);
	printf("Enter the elements of matrix B: \n");
	readMatrix(B, rows, cols);
	sumMatrix(A, B, C, rows, cols);
	printf("\nMatrix A:\n");
	displayMatrix(A, rows, cols);
	printf("\nMatrix B:\n");
	displayMatrix(B, rows, cols);
	printf("\nMatrix C (sum of A & B):\n");
	displayMatrix(C, rows, cols);
	return 0;
}

