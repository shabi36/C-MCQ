#include <stdio.h>

int main() {
int arr[] = {1, 2, 3, 4};
void *ptr = arr;

printf("%d\n", *((int *)ptr + 2));
return 0;
}
