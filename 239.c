#include<stdio.h>

int get(int n){

    if (n <= 1){
        return;
    }
    return get(n-1) + get(n-2);
}
void main(){

int ans = get(6);
printf("%d" , ans);
}