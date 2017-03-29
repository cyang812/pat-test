/*
 * pat1006.c
 *
 *  Created on: 2017Äê3ÔÂ29ÈÕ
 *      Author: cyang
 */

#include <stdio.h>

void printfInfo(int idx,int n);

int main()
{
  int num,i=0;
  int a[3] = {0};
  scanf("%d",&num);

  while(num != 0)
    {
      a[i] = num%10;
      i++;
      num = num/10;
    }

//for input test
//  int j = 0;
//  for(j; j<3; j++)
//    {
//      printf(" %d ",a[j]);
//    }

  printfInfo(3,a[2]);
  printfInfo(2,a[1]);
  printfInfo(1,a[0]);

  return 0;
}

void printfInfo(int idx,int n)
{
  switch(idx)
  {
    case 3:
      for(int i=0; i<n; i++) printf("B");
      break;
    case 2:
      for(int i=0; i<n; i++) printf("S");
      break;
    case 1:
      if(n == 0) printf("0");
      else for(int i=1; i<=n; i++) printf("%d",i);
      break;
  }
}
