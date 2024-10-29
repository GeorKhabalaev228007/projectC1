#include <stdio.h>
int main(){
int n,s,i;
for (n = 5, s = 1, i = 1; i <= n; i++)s = s * i;
printf("%d %d\n", n, s);
}
