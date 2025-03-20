#include<stdio.h>

struct marks {

int p : 3;
int q : 3;
int r : 2;


}

void main(){


  struct marks s = {2,-6,5};
  printf("%d %d %d" , s.p , s.q , s.r);

}
