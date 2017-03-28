/*
 * pat1001.c
 *
 *  Created on: 2017Äê3ÔÂ28ÈÕ
 *      Author: cyang
 */

#include <stdio.h>

int main()
{
  int num=0;
  int n ;
  scanf("%d",&n);
  for(;;)
    {
      if (n%2==0)
	{
	  n = n/2;
	  num++;
	}
      else
	{
	  n = (3*n+1)/2;
	  num++;
	}
      if(n==1)
	{
	  printf("%d",num);
	  break;
	}
    }
  return num;
}

