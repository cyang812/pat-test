/*
 * pat1002.c
 *
 *  Created on: 2017Äê3ÔÂ28ÈÕ
 *      Author: cyang
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

int parse(int n,char *a);
void printfNum(int n,char *a);

int main()
{
  char n = ' ';
  int sum = 0;
  int idx = 0;
  int temp = 0;
  char a[100] = {0};
  char b[100] = {0};
  //scanf("%ld",&n);
  //parse(n,a);
  n = getchar();

  while(n!='\n')
    {
      sum = sum + (n-'0');
      n = getchar();
    }
  printf("\nsum :%d\n",sum);

  temp = parse(sum,b);
  idx = 0;
  while(b[idx]!='\0')
    {
      printf("b[idx]:%d ",b[idx]);
      idx++;
    }

  printfNum(temp,b);

  return 0;
}

int parse(int n,char *a)
{
  int i = 0;
  while(n!=0)
    {
      a[i++] = n%10;
      n = n/10;
      printf("a[%d]: %d ",i-1,a[i-1]);
    }
  a[i] = '\0';
  return i;
}

void printfNum(int n,char *a)
{
  int i = 0;
  //while(a[i] != '\0')i++;
  i = n;
  printf("\n i: %d\n",i);
  while(--i>=0)
    {
      switch(a[i])
      {
	case 0 :
	  printf("ling");break;
	case 1 :
	  printf("yi");break;
	case 2 :
	  printf("er");break;
	case 3 :
	  printf("san");break;
	case 4 :
	  printf("si");break;
	case 5 :
	  printf("wu");break;
	case 6 :
	  printf("liu");break;
	case 7 :
	  printf("qi");break;
	case 8 :
	  printf("ba");break;
	case 9 :
	  printf("jiu");break;
	default :
	  break;
      }
     if(i!=0)
      printf(" ");
    }
}
