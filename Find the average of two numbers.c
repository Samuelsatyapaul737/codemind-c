
#include <stdio.h>
int main()
{
  int number1, number2;
  float average;
  scanf("%d%d",&number1,&number2);
  average= (float)(number1 + number2)/2;
  printf("%.4f ",average);
  return 0;
}
