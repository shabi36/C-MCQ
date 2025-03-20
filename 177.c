#include <stdio.h>
void fun(char *str) {
printf("%c", ++*str);
}
int main() {
char arr[] = "Hello";
fun(arr);
return 0;
}
