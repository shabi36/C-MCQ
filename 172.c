#include <stdio.h>
void solve(int arr[], int size) {
for (int i = 0; i < size; i++)
arr[i] += i;
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
solve(arr, 5);
printf("%d", arr[3]);
return 0;
}
