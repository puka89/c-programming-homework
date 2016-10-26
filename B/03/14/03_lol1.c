#include "stdio.h"

int main() {

  int n,i,m,q,k,p,d;
  p=0;
  d=0;
  scanf("%d",&n);
  scanf("%d",&q);
  scanf("%d",&k);

  for (i=0;i<n;i+=k)
 {
  if(i>=k){
    d+=0.02*q;
  }
    p=k*(q-d)+p;
  }
  printf("%d",p);
  return 0;
}
