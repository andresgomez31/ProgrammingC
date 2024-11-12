#include <stdio.h>
#include <stdlib.h>

int* summatrix(int n, int m, int a[n][m], int b[n][m]){
    int *matrix = malloc((n * m) * sizeof(int));
    int i, j;


    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            matrix[i*m + j] = a[i][j] + b[i][j];
        }
    }
    return matrix;
}

void print_mat(int n, int m, int *matrix){
    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", matrix[i*m + j]);
        }
        printf("\n");
    }
}


int main(){
    int n, m;
    int i, j;
    char input[32];

    printf("Please enter the number of rows and columns (separate with a blank space): ");
    fgets(input, 32, stdin);

    sscanf(input, "%d %d", &n, &m);

    int mat1[n][m];
    int mat2[n][m];

    printf("\nEnter the values for the first matrix: \n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("(%d, %d): ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the values for the second matrix: \n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("(%d, %d): ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    int *matrix = malloc((n * m) * sizeof(int));

    matrix = summatrix(n, m, mat1, mat2);
    print_mat(n, m, matrix);
    free(matrix);

return 0;
}