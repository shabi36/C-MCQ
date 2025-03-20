#include <stdio.h>

void change(int *ptr) {
int a = 10;
ptr = &a;
}

int main() {
int x = 5;
int *p = &x;
change(p);
printf("%d", *p);
return 0;
}
