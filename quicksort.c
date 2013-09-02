#include <stdio.h>
#include <string.h>
void swap(int *x,int *y)
{  
	int t;
	t=*x;
	*x=*y;
    *y=t;
}

int partion(int *A,int p,int r)
{
int x=A[r];
int i=p-1;
int j;
for(j=p;j<r;j++)
{
	if(A[j]<=x)
	{
	i=i+1;
	swap(&A[i],&A[j]);
	}
}
swap(&A[i+1],&A[r]); 
return i+1;
}

void quicksort(int *A,int p,int r)
{
	int q;
  if(p<r)
  {
  q=partion(A,p,r);
  quicksort(A,p,q-1);
  quicksort(A,q+1,r);
  }
}

main()
{
  int A[10];
  int i;
  int p;
  int r;
  for(i=0;i<10;i++)
    scanf("%d",&A[i]);
  p=0;
  r=sizeof(A)/sizeof(int)-1;
  printf("before sort:\n");
  for(i=0;i<=r;i++)
   printf("%d ",A[i]);
  printf("\n");
  quicksort(A,p,r);
  printf("after sort:\n");
  for(i=0;i<=r;i++)
   printf("%d ",A[i]);
}