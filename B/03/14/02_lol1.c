#include "stdio.h"

int main() {

  int n,s,i;
  float m,q;
  q=0;
  m=0;
  scanf("%d",&n);

  for (i=0;0<n;++i)
  {
  s=n%10;
  q=q+s;
  m=q/(i+1);
  n/=10;
  }
  if(m>7){
  printf("heavy");
  }else{
  printf("light");
  }

  return 0;
}
