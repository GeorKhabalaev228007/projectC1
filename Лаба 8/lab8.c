#include <stdio.h>  
 
double determinant(double matrix[][3], int n) {  
    if (n == 2) {  
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];  
    }  
    if (n == 3) {  
        return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -  
               matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +  
               matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);  
    }  
    return 0;   
}  
 
void solve_cramer(double a[][3], double b[], double x[], int n) {  
    double det_a = determinant(a, n);  
    if (det_a == 0) {  
        printf("Определитель равен 0.\n");  
        return;  
    }  
 
    for (int i = 0; i < n; i++) {  
        double temp_matrix[3][3];  
        for (int j = 0; j < n; j++) { 
            for (int k = 0; k < n; k++) { 
                temp_matrix[j][k] = a[j][k]; 
            } 
            temp_matrix[j][i] = b[j];  
        } 
         
        x[i] = determinant(temp_matrix, n) / det_a; 
    }  
}  
int main() {  
    int n;  
    printf("Введите матрицу (2 или 3): ");  
    scanf("%d", &n);  
 
    if (n < 2 || n > 3) {  
        printf("Не такой размер матрицы.\n");  
        return 1;  
    }  
 
    double a[3][3], b[3], x[3];  
 
    printf("Введите коэффы матрицы:\n");  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            scanf("%lf", &a[i][j]);  
        }  
    }  
 
    printf("Введите константы:\n");  
    for (int i = 0; i < n; i++) {  
        scanf("%lf", &b[i]);  
    }  
    solve_cramer(a, b, x, n);  
 
    double det_a = determinant(a, n);  
    if (det_a != 0) {  
        printf("Определитель матрицы: %.2lf\n", det_a);  
        printf("\n");  
        for (int i = 0; i < n; i++) {  
            printf("x%d = %.2lf\n", i + 1, x[i]);  
        }  
    }  
 
    return 0;  
}
