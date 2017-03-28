/*
 * pat1002.c
 *
 *  Created on: 2017Äê3ÔÂ28ÈÕ
 *      Author: cyang
 */

#include <stdio.h>

void parse(int n,int a[]);

int main()
{
  int n = 32;
  int a[10] = {0};
  //int b[10] = {0};
  //scanf("%d",&n);
  parse(n,a);
  for(int i = 0;i<10;i++)
    {
      printf(" %d ",a[i]);
    }
  return 0;
}

void parse(int n,int a[])
{
  printf("parse");
  int i=0;
  for(;;)
    {
      if(n!=0)
	{
	  a[i] = n%10;
	  i++;
	  n/10;
	  printf("%d",n);
	}
      else
	{
	  break;
	}
    }
}
