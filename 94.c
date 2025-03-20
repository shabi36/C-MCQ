#include<stdio.h>

void func(){

int x = 0;
static int y = 0;
x++ ;
y ++ ;

printf("%d %d" , x , y);

}

void main(){
func();
func();
}
