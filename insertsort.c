#include <stdio.h>
main(){
int i,j,t;
int a[6];
for(i=0;i<6;i++)
scanf("%d",&a[i]);
for(j=1;j<6;j++)
{
  t=a[j];
  i=j-1;
  while((a[i]>t)&&(i>=0))
  {
   a[i+1]=a[i];
   i--;
  }
  a[i+1]=t;
}
for(i=0;i<6;i++)
printf("%d ",a[i]);
}