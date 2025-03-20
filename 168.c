#include <stdio.h>

int main() {
int a = 3, b = 5, c = 2;
printf("%d ", (a > b) ? a++ : b++);
printf("%d ", (c & b) ? ++c : --b);
printf("%d %d %d", a, b, c);
return 0;
}
