
#include <stdio.h>

double mysteryDouble(double n) {
if (n <= 1.0)
return 1.0;
else
return n / 2.0 + mysteryDouble(n - 1.0);
}

int mysteryInt(int *n) {
if (*n == 0)
return 0;
else {
(*n)--;
return *n + mysteryInt(n);
}
}

int main() {
int x = 5;
double y = 5.0;

printf("mysteryDouble(5.0): %.2f\n", mysteryDouble(y));
printf("mysteryInt(5): %d\n", mysteryInt(&x));

return 0;
}
