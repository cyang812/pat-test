/*
 * pat1003.c
 *
 *  Created on: 2017Äê3ÔÂ28ÈÕ
 *      Author: cyang
 */

#include <stdio.h>
#include <string.h>

#define MAXSN 10
#define MAXCN 100

void judgeString(int n,char str[MAXSN][MAXCN]);

int main()
{
  char str[MAXSN][MAXCN];
  int n = 0;
  scanf("%d",&n);
  for(int i=0; i<n; i++)
    {
      scanf("%s",str[i]);
    }

//  for(int j=0; j<n; j++)
//    {
//      printf("%s",str[j]);
//      printf("%d",strlen(str[j]));
//    }

  judgeString(n,str);

  return 0;
}

void judgeString(int n,char str[MAXSN][MAXCN])
{
  int x = 0,y = 0,flag = 1;
  for(x; x<n; x++)
    {
      flag = 1;
      for(y=0; y<strlen(str[x]); y++)
	{
	  if((str[x][y]=='P') || (str[x][y]=='A') || (str[x][y]=='T'))
	    {
	      continue;
	    }
	  else
	    {
	      printf("NO\n");
	      flag = 0;
	      break;
	    }
	}
      if(flag)
	{
	  printf("YES\n");
	}
    }
}
