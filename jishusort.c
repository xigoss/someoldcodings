#include <stdio.h>
void main(){
int a[8];
int b[8];
int c[11];
int i,j;
for(i=0;i<8;i++)
scanf("%d",&a[i]);
for(j=0;j<11;j++)
c[j]=0;
for(i=0;i<8;i++)
c[a[i]]++;         //c[i]��������i��Ԫ�ظ���
for(j=1;j<11;j++)
c[j]=c[j]+c[j-1];  //c[i]�������ڻ�С��i��Ԫ�ظ���
for(i=7;i>=0;i--)
{
	b[c[a[i]]-1]=a[i];
	c[a[i]]--;
}
for(i=0;i<8;i++)
printf("%d ",b[i]);
}