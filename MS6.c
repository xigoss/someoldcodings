#include <stdio.h>
#include <string.h>

#define N 10

int getFrequency(int array[], int num){
	int i, count = 0;
	for(i=0; i<N; i++){
		if(array[i] == num){
			count++;
		}
	}
	return count;
}

int* fun(int array[]){
	int i, count, flag = 1;
	static int a[N];
	memset(a, 0, N);
	while(flag == 1){
		flag = 0;
		for(i=0; i<N; i++){
			count = getFrequency(a, array[i]);
			if(count != a[i]){
				a[i] = count;
				flag = 1;
			}
		}
	}
	return a;
}

void main(){
	int i;
	int array[] = {0,0,2,3,4,5,6,7,8,9};
	int *b;
	b = fun(array);
	for(i=0; i<N; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	for(i=0; i<N; i++){
		printf("%d ", b[i]);
	}
}