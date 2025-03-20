#include<stdio.h>

int func(){
    int static num = 10;
    return num--;
}


int main(){

for (func() ; func() ; func()){

    printf("%d" , func());
}
    return 0 ;
}