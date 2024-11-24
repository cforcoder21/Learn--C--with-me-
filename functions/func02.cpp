#include <stdio.h>

void main(){
    char ch;
    ch=fun_ch();
    printf("ch=%c", ch);
}
char fun_ch(){
    char c;
    printf("Enter any char : ");
    scanf("%c",&c);
    return c;
}