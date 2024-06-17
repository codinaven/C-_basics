#include <stdio.h>
int main (){
int num ,pow,hepow ;
  int result=1;
  printf("ener the no.%d",num);
  scanf("%d",&num );
  printf("teh power is :%d",pow);
  scanf("%d",&pow);
  hepow=pow;
  while (pow>0);
  {
  result=result*num;
    pow=pow-1;

  }


printf (" the %d of %d is : %d",num,hepow,result );

  return 0;

}