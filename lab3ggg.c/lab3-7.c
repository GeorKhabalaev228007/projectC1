#include <stdio.h>
int main(){
int a = 11, n = 2, flag = 0;while(a%n!=0){
n++;
if(n == a){flag = 1; break;}
printf("%d",flag);}
}
