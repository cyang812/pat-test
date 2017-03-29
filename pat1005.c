/*
 * pat1005.c
 *
 *  Created on: 2017Äê3ÔÂ28ÈÕ
 *      Author: cyang
 */

#include <stdio.h>

#define MAX 20

int main()
{
  int n = 0;
  int i,j;
  int num[]={0};
  int nextNum[MAX]={0};
  scanf("%d",&n);

  printf("n: %d\n",n);
  for(i=0; i<n; i++)
    {
      scanf("%d",&num[i]);
    }

  for(j=0; j<n; j++)
    {
      printf("test\n");
      printf("n: %d\n",n);
      printf(" %d \n",num[j]);
    }

  return 0;
}
