/*
 * pat1004.c
 *
 *  Created on: 2017Äê3ÔÂ28ÈÕ
 *      Author: cyang
 */

#include <stdio.h>
#define MAX 10

typedef struct student{
  char name[MAX];
  char id_num[MAX];
  int score;
}STU;

void findNum(int n,int a[],int b[]);
void printfInfo(STU stu[],int j);
int findIdx(int num,int n,int bak_idx[]);

int main()
{
  int i,n = 0;
  scanf("%d",&n);
  STU stu[n];
  int idx[n];
  int bak_idx[n];
  int ret[2] = {0};
  int idx1,idx2;

  for(i=0; i<n; i++)
    {
      scanf("%s",&stu[i].name);
      scanf("%s",&stu[i].id_num);
      scanf("%d",&stu[i].score);
      idx[i]=stu[i].score;
      bak_idx[i]=idx[i];
    }

  findNum(n,idx,ret);

  //int idxtst[10] = {1,4,6,2,7,18,3,5,9,0};
  //findNum(10,idxtst,ret);

  printf(" %d ",ret[0]);
  printf(" %d ",ret[1]);

  idx1 = findIdx(ret[0],n,bak_idx);
  idx2 = findIdx(ret[1],n,bak_idx);

  printf(" %d ",idx1);
  printf(" %d ",idx2);

  printfInfo(stu,idx1);
  printfInfo(stu,idx2);

  return 0;
}

void findNum(int n,int a[],int b[])
{
  int i,j;
  int temp;
  for(i=0; i<n; i++)
    {
      for(j=0; j<n-1-i; j++)
	{
	  if(a[j]>a[j+1])
	    {
	      temp = a[j];
	      a[j] = a[j+1];
	      a[j+1] = temp;
	    }
	}
    }
  b[0] = a[n-1];
  b[1] = a[0];
}

int findIdx(int num,int n,int bak_idx[])
{
  int i=0;
  for(i; i<n; i++)
    {
      if(num == bak_idx[i] )
	{
	  return i;
	}
    }
}

void printfInfo(STU stu[],int j)
{
  printf("%s ",stu[j].name);
  printf("%s\n",stu[j].id_num);
}



