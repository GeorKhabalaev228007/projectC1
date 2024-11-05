#include <stdio.h>

int main() {
    int arrA[5] = {1, -3, 5, 7, -9};
    int arrB[5] = {2, 4, -6, 8, -1};
    int arrC[5];
    int max = arrA[0];
    int mnm = arrA[0];
    float srz;
    int p = 5;

    for(int i = 0; i < p; i++){
        arrC[i] = arrA[i] + arrB[i];
    }
    for(int d= 0; d < p; d+=2){
        if(arrA[d] > max){
            max = arrA[d];
        }
    }
    for(int e = 1; e < p; e+=2){
        if (arrB[e] < 0){
            mnm++;
        }
    }
    for(int j = 0; j < p; j++) {
        srz += arrC[0];
    }
    printf("Максимальная реальная : %d\n", max);
    printf("Количество мнимых частей меньше нуля: %d\n", mnm);
    printf("Среднее арифметическое всех элементов C: %.2f", srz/5);
}
