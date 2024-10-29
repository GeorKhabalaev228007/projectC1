#include <stdio.h>
int main(){
// 7, 11, 13, 17, 23, 101
int a = 17, s = 0, n = 2;
for (s, n; n < a; n++)
if (a % n == 0){s = 1;break;}
printf("%d\n", s);
}

