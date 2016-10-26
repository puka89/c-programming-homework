#include "stdio.h"

int main() {

  int n,s,m,i;
  float q;
  m=0;
  q=0;
  scanf("%d",&n);

  for (i=0;i<n;++i)
  {
  scanf("%d",&s);
  m=m+ s;
  q=(float)m/(i+1);
  }

  printf("Sum: %d\nAvg: %.2f",m,q);

  return 0;
}
