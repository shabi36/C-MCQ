#include <stdio.h>

void func(int *arr) {
arr[2] = 100; // Modifies arr[2] in the original array
arr = arr + 2; // Changes local pointer 'arr' to point to arr[2]
arr[1] = 200; // Modifies arr[3] (not affecting arr[1] in main)
}

int main() {
int arr[5] = {1, 2, 3, 4, 5}; // Original array
func(arr);
printf("%d %d %d\n", arr[0], arr[1], arr[2]);
return 0;
}
