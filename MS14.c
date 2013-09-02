#include <stdio.h>

static int p[1000];
static count = -1;

void findsum(int *array, int len, int m){	
	int i,j;
	count++;
	for(i=0; i<len; i++){
		if(array[i] == m){
			p[count] = array[i];
			for(j=0; j<=count; j++){
				printf("%d ",p[j]);
			}
			printf("\n");
		}else if(array[i] < m && len-1 > 0){
			p[count] = array[i];			
			findsum(array+i+1, len-i-1, m-array[i]);
		}else{
			continue;
		}
	}
	count--;
}

int main(){
	int array[] = {2,3,2,5,3,4,6,1};
	int len = sizeof(array)/sizeof(int);
	findsum(array, len, 10);
}