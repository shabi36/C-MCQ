#include <stdio.h>
void solve(int *a, int *b) {
*a = *a ^ *b;
*b = *a ^ *b;
*a = *a ^ *b;
}
int main() {
int x = 5, y = 10;
solve(&x, &y);
printf("%d %d", x, y);
return 0;
}
