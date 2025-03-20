#include <stdio.h>

void display(int n) {
if (n == 0)
return;
display(n / 2);
printf("%d ", n);
}

int main() {
display(10);
return 0;
}
